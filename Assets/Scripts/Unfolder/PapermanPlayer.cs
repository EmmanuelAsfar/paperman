using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using System.Threading;
using System.Threading.Tasks;
using BeautifulColors;
using Parabox.Stl;
using Unfolder;
using UnityEngine;
using UnityEngine.UIElements;

public enum ViewMode { Model, Model3D, Model2D, Model25D }

namespace Unfolder {
    public class PapermanPlayer : MonoBehaviour
    {
        [Range(0, 1000)]
        public int iterations = 0;

        // Pour model
        [Range(0, 1)]
        public float polyReduceFactor = 1f;
        public bool acceptMixedMaterials = true;
        [Range(3, 100)]
        public float modelSize = 40f; // Size of the target model (diagonal)
        [Range(0, 5)]
        public float explodeAmount = 1f; // Size of the target model (diagonal)
        [Range(0, 50)]
        public int swatchCount = 100;

        // Pour nesting and layout
        [Range(0.1f, 1)]
        public float shapeMaxSizeRatio = 0.7f;
        public Vector2 sheetSize = new Vector2(21f, 29.7f);
        public Vector2 sheetMargin = new Vector2(1.3f, 1.5f);

        // Pour impression carton
        [Range(0, 2)]
        public float stripHeight = 0.75f;
        [Range(10, 180)]
        public float stripAngle = 80f;
        [Range(0, 90)]
        public float angleNoFold = 15f;
        [Range(0, 2)]
        public float stripMinHeight = 0.5f;
        [Range(0, 180)]
        public float stripMinAngle = 15f;
        [Range(0, 0.5f)]
        public float lineThickness = 0.01f;
        [Range(150, 1200)]
        public float resolutionDPI = 300f;

        // Pour impression3D
        [Range(0, 20f)]
        public float foldLimitAngle = 5f;
        [Range(0, 1f)]
        public float pieceThickness = 0.35f;
        [Range(0, 0.5f)]
        public float foldThickness = 0.08f;

        public GameObject originalModel;
        public GameObject currentModel;
        private Pattern currentPattern;
        private GameObject current2DModel;
        private GameObject current3DModel;
        private GameObject current25DModel;

        public Camera orbitCamera;
        public Camera backCamera;
        public Camera frontCamera;

        public ViewMode mode;

        private bool requestBuild3D, requestUnfold;
        private bool isComputing;
        private bool create2D;
        private bool create25D;
        private int targetFaces;
        private int currentFaces;
        private int originalFaces;
        private int currentSwatchId;

        private string modelName;
        private string savePath;
        private string loadPath = ".";
        private static int tempId;
        

        private TaskProgress taskProgress;
        private bool parameterChanged;
        private List<UnityEngine.Color[]> swatches;

        private ControlPanel controlPanel;

        private VisualElement rootPanel;
        public GameObject viewer2D, viewer3D, viewer25D;

        void OnEnable()
        {
            rootPanel = GetComponent<UIDocument>().rootVisualElement;
            controlPanel = new ControlPanel(rootPanel);
            controlPanel.ImportModelFromFile.RegisterCallback<ClickEvent>(ev => ImportModelFromFile(false));
            controlPanel.RotateModel.RegisterCallback<ClickEvent>(ev => RotateModel());
            controlPanel.PickInLibrary.RegisterCallback<ClickEvent>(ev => PickInLibrary());
            controlPanel.ReduceMesh.RegisterCallback<ClickEvent>(ev => ReduceMesh());
            controlPanel.GeneratePreview.RegisterCallback<ClickEvent>(ev => GeneratePreview());
            controlPanel.GenerateArtcraft.RegisterCallback<ClickEvent>(ev => GenerateArtcraft());
            controlPanel.SaveArtcraft.RegisterCallback<ClickEvent>(ev => SaveArtcraft());
            controlPanel.Cancel.RegisterCallback<ClickEvent>(ev => Cancel());
            controlPanel.ViewModel.RegisterCallback<ClickEvent>(ev => SetViewMode(ViewMode.Model));
            controlPanel.ViewPreview.RegisterCallback<ClickEvent>(ev => SetViewMode(ViewMode.Model3D));
            controlPanel.View2D.RegisterCallback<ClickEvent>(ev => SetViewMode(ViewMode.Model2D));
            controlPanel.View25D.RegisterCallback<ClickEvent>(ev => SetViewMode(ViewMode.Model25D));

            controlPanel.ModelSize.RegisterValueChangedCallback(x => UpdateModelSize(x.newValue));
            controlPanel.ExplodeAmount.RegisterValueChangedCallback(x => UpdateExplodeLevel(x.newValue));

            controlPanel.NextSwatch.RegisterCallback<ClickEvent>(ev => SwitchSwatch(true));
            controlPanel.PreviousSwatch.RegisterCallback<ClickEvent>(ev => SwitchSwatch(false));
            controlPanel.SimilarTones.RegisterValueChangedCallback(x => UpdateParametersPanel());

            controlPanel.PageWidth.RegisterValueChangedCallback(x => { parameterChanged = true; UpdateParametersPanel(); });
            controlPanel.PageHeight.RegisterValueChangedCallback(x => { parameterChanged = true; UpdateParametersPanel(); });
            controlPanel.WidthMargin.RegisterValueChangedCallback(x => { parameterChanged = true; UpdateParametersPanel(); });
            controlPanel.HeightMargin.RegisterValueChangedCallback(x => { parameterChanged = true; UpdateParametersPanel(); });
            controlPanel.TargetFaces.RegisterValueChangedCallback(x => UpdateParametersPanel());
            controlPanel.SortColors.RegisterValueChangedCallback(x => { parameterChanged = true; UpdateParametersPanel(); });
            controlPanel.Create2D.RegisterValueChangedCallback(x => UpdateParametersPanel());
            controlPanel.Create25D.RegisterValueChangedCallback(x => UpdateParametersPanel());

            taskProgress = new TaskProgress();
            taskProgress.progressMessage = "Ready";

            InitSwatches();

            UpdateParametersPanel();
        }

        private void InitSwatches()
        {
            var cf = new ColorFactory();
            swatches = new List<UnityEngine.Color[]>();
            for (int i = 0; i < swatchCount; i++)
            {
                var swatch = new UnityEngine.Color[ControlPanel.colorCount];
                for (int j = 0; j < ControlPanel.colorCount; j++)
                {
                    BeautifulColors.Color c = cf.RandomBeautiful().First();
                    swatch[j] = new UnityEngine.Color(c.R/255f, c.G/255f, c.B/255f, c.A/255f);
                }
                swatches.Add(swatch);
            }
            currentSwatchId = 0;
        }

        private void SetSwatch(int swatchId)
        {
            currentSwatchId = swatchId;
            for (int i = 0; i < ControlPanel.colorCount; i++) {
                controlPanel.colorButtons[i].style.backgroundColor = swatches[currentSwatchId][i];
                Debug.Log("Color id = "+currentSwatchId);
            }
            if (currentModel != null)
                UnityUtil.ApplySwatch(currentModel, swatches[currentSwatchId]);
        }

        private void SwitchSwatch(bool isNext)
        {
            int nextSwatchId = currentSwatchId + (isNext ? 1 : -1);
            if (nextSwatchId < 0) nextSwatchId = swatchCount - 1;
            if (nextSwatchId == swatchCount) nextSwatchId = 0;
            SetSwatch(nextSwatchId);
        }

        private void Start()
        {
            ImportModelFromFile(true);
            UpdateModelSize(modelSize);
            UpdateExplodeLevel(explodeAmount);
        }

        private void SetComputing(bool computing)
        {
            isComputing = computing;
            if (isComputing) taskProgress.requestInterruption = false;
            UpdateParametersPanel();
        }

        private void UpdateProgressBar()
        {
            VisualElement progressAmount = rootPanel.Q<VisualElement>("ProgressAmount");
            rootPanel.Q<Label>("ProgressMessage").text = taskProgress.GetProgressMessage();
            //progressAmount.layout.width = taskProgress.progressAmount;
        }

        private void UpdateParametersPanel()
        {
            if (rootPanel.enabledSelf) {
                explodeAmount = controlPanel.ExplodeAmount.value;
                modelSize = controlPanel.ModelSize.value;
                acceptMixedMaterials = !controlPanel.SortColors.value;
                create2D = controlPanel.Create2D.value;
                create25D = controlPanel.Create25D.value;
                controlPanel.TargetFaces.highValue = originalFaces;
                targetFaces = (int)controlPanel.TargetFaces.value;
                sheetSize = new Vector2(controlPanel.PageWidth.value / 10f, controlPanel.PageHeight.value / 10f);
                sheetMargin = new Vector2(controlPanel.WidthMargin.value / 10f, controlPanel.HeightMargin.value / 10f);
                controlPanel.FaceCount.value = currentModel == null ? "" : "" + currentFaces;
                controlPanel.SaveArtcraft.SetEnabled(currentPattern != null);
                controlPanel.Cancel.SetEnabled(isComputing);
            }
            rootPanel.Q<VisualElement>("ControlPanel").SetEnabled(!isComputing);
        }

        private void ImportModelFromFile(bool loadDefault)
        {
            GameObject newModel;
            if (loadDefault) {
                newModel = ModelLoader.LoadModel(Path.Combine(Application.dataPath, "Resources/DefaultModel.dae"));
            } else {
                taskProgress.progressMessage = "Picking a model file";
                String filePath = UnityUtil.ChooseFile(loadPath);
                if (filePath == null)
                {
                    taskProgress.progressMessage = "No model file selected";
                    return;
                }
                loadPath = Path.GetDirectoryName(filePath);
                modelName = Path.GetFileNameWithoutExtension(filePath);
                newModel = ModelLoader.LoadModel(filePath);
                if (newModel == null)
                {
                    taskProgress.progressMessage = "Model loading failed : "+ filePath;
                    return;
                }
            }
            Destroy(originalModel);
            Destroy(currentModel);
            originalModel = newModel;
            //UnityUtil.Merge(originalModel);
            originalModel.SetActive(false);
            currentModel = Instantiate(originalModel);
            originalModel.SetActive(false);
            currentModel.name = originalModel.name + "_";
            currentModel.SetActive(true);
            UnityUtil.Merge(currentModel);
            UnityUtil.SplitTriangles(currentModel);
            //UnityUtil.ApplyOutline(currentModel);
            originalFaces = UnityUtil.CountFaces(currentModel);
            UpdateCurrentModel();
        }

        private void PickInLibrary()
        {
            // TODO Implementer
        }

        private void ReduceMesh()
        {
            if (originalModel == null) return;
            Destroy(currentModel);
            originalModel.SetActive(true);
            currentModel = Instantiate(originalModel);
            UnityUtil.Merge(currentModel);
            originalModel.SetActive(false);
            currentModel.name = originalModel.name + "_";
            int faceBefore = UnityUtil.CountFaces(currentModel);
            float reduceFactor = (1.0f * targetFaces) / faceBefore;
            if (reduceFactor < 0.01)
            {
                UnityUtil.ReducePoly(currentModel, 0.01f, angleNoFold);
                reduceFactor *= 100;
            }
            UnityUtil.ReducePoly(currentModel, reduceFactor, angleNoFold);
            UnityUtil.SplitTriangles(currentModel);
            //UnityUtil.ApplyOutline(currentModel);
            taskProgress.progressMessage = "Model face count reduced from "+ faceBefore+" to "+ UnityUtil.CountFaces(currentModel);
            taskProgress.progressAmount = 1f;
            UpdateCurrentModel();
        }

        private void RotateModel()
        {
            if (originalModel == null) return;
            taskProgress.progressMessage = "Model rotated of 90°";
            originalModel.transform.Rotate(Vector3.right, 90);
            currentModel.transform.Rotate(Vector3.right, 90);
            taskProgress.progressAmount = 1f;
            //UpdateCurrentModel();
        }

        private void GeneratePreview()
        {
            if (isComputing) return;
            SetViewMode(ViewMode.Model);
            if (currentModel == null) return;
            currentPattern = Paperman.GetPattern(this, taskProgress);
            var t = new Task(() => {
                SetComputing(true);
                try {
                    currentPattern.Compute();
                    parameterChanged = false;
                    requestBuild3D = true;
                    taskProgress.progressAmount = 1;
                    taskProgress.progressMessage = "Artcraft preview generated";
                } catch (Exception ex) {
                    currentPattern = null;
                    taskProgress.progressMessage = "Error while generating artcraft preview : " + ex.Message;
                }
                SetComputing(false);
            });
            t.Start();
        }

        private void GenerateArtcraft()
        {
            if (isComputing) return;
            if (currentModel == null) return;
            bool patternNotBuild = false;
            if (currentPattern == null || parameterChanged) {
                SetViewMode(ViewMode.Model);
                patternNotBuild = true;
                currentPattern = Paperman.GetPattern(this, taskProgress);
            } else
            {
                SetViewMode(ViewMode.Model3D);
            }
            var t = new Task(() => {
                SetComputing(true);
                try {
                    if (patternNotBuild) {
                        currentPattern.Compute();
                        parameterChanged = false;
                        requestBuild3D = true;
                    }
                    taskProgress.progressAmount = 0;
                    taskProgress.progressMessage = "Optimizing artcraft shapes position";
                    currentPattern.NestShapes(taskProgress);
                    taskProgress.progressAmount = 1;
                    taskProgress.progressMessage = "Artcraft generated";
                    requestUnfold = true;
                } catch (Exception ex) {
                    taskProgress.progressMessage = "Error while generating artcraft : "+ex.Message;
                }
                SetComputing(false);
            });
            t.Start();
        }

        private void SaveArtcraft()
        {
            if (currentPattern == null || (current2DModel == null && create2D) || (current25DModel == null && create25D))
            {
                taskProgress.progressMessage = "Please generate an artcraft before saving";
                taskProgress.taskStatus = TaskProgress.Status.Error;
                return;
            }
            if (!create2D && !create25D)
            {
                taskProgress.progressMessage = "Please generate at least one artcraft style (paper or 3D printing) before exporting";
                taskProgress.taskStatus = TaskProgress.Status.Error;
                return;
            }
            String filePath = UnityUtil.ChooseExportPath(savePath, modelName);
            if (filePath == null)
            {
                taskProgress.progressMessage = "No export file chosen. Export cancelled";
                taskProgress.taskStatus = TaskProgress.Status.Error;
                return;
            }
            savePath = Path.GetDirectoryName(filePath);
            tempId++;
            String tempPath = Path.Combine(Application.temporaryCachePath, modelName+"_" + tempId);
            Directory.CreateDirectory(tempPath);
            Debug.Log("Export temps files at : " + tempPath);
            if (create2D)
            {
                SetViewMode(ViewMode.Model2D);
                Paperman.Capture2DImage(currentPattern, resolutionDPI, currentModel.name, tempPath);
            }
            if (create25D)
            {
                SetViewMode(ViewMode.Model25D);
                Paperman.ExportChildrenInSTL(current25DModel, tempPath);
            }
            UnityUtil.ExportFiles(tempPath, filePath);
            taskProgress.progressAmount = 1;
            taskProgress.progressMessage = "Artcraft zip file generated here : "+ filePath;
            SetViewMode(ViewMode.Model);
        }

        private void Cancel()
        {
            if (currentPattern == null) return;
            currentPattern.RequestInterruption();
            SetComputing(false);
            SetViewMode(ViewMode.Model);
            taskProgress.progressAmount = 1;
            taskProgress.progressMessage = "Generation cancelled";
        }

        private void SwitchView()
        {
            if (mode == ViewMode.Model25D) SetViewMode(ViewMode.Model);
            else if (mode == ViewMode.Model) SetViewMode(ViewMode.Model3D);
            else if (mode == ViewMode.Model3D) SetViewMode(ViewMode.Model2D);
            else if (mode == ViewMode.Model2D) SetViewMode(ViewMode.Model25D);
        }

        void Update()
        {
            if (!isComputing) {
                if (Input.GetKeyDown("l")) ImportModelFromFile(false);
                if (Input.GetKeyDown("r")) ReduceMesh();
                if (Input.GetKeyDown("p")) GeneratePreview();
                if (Input.GetKeyDown("g")) GenerateArtcraft();
                if (Input.GetKeyDown("s")) SaveArtcraft();
            }
            if (Input.GetKeyDown(KeyCode.Escape)) Cancel();
            if (Input.GetKeyDown(KeyCode.Space)) SwitchView();
            if (Input.GetKeyDown(KeyCode.LeftShift) || Input.GetKeyDown(KeyCode.RightShift))
            {
                backCamera.enabled = false;
            }
            if (Input.GetKeyUp(KeyCode.LeftShift) || Input.GetKeyUp(KeyCode.RightShift))
            {
                backCamera.enabled = true;
            }

            if (requestBuild3D)
            {
                try {
                    requestBuild3D = false;
                    if (current3DModel != null) Destroy(current3DModel);
                    current3DModel = currentPattern.Build3DPatternObject();
                    PlaceIn3DViewer(current3DModel);
                    SetViewMode(ViewMode.Model3D);
                } catch (Exception ex)
                {
                    taskProgress.progressMessage = "Error while creating artcraft preview - "+ex.Message;
                    taskProgress.taskStatus = TaskProgress.Status.Error;
                }
            }

            if (requestUnfold)
            {
                try {
                    requestUnfold = false;
                    if (current2DModel != null) Destroy(current2DModel);
                    if (current25DModel != null) Destroy(current25DModel);
                    current2DModel = currentPattern.Build2DPatternObject();
                    current25DModel = currentPattern.Build25DPatternObject();
                    current2DModel.transform.parent = viewer2D.transform;
                    current2DModel.transform.position = Vector3.zero;
                    PlaceIn25DViewer(current25DModel);
                    SetViewMode(ViewMode.Model2D);
                } catch (Exception ex)
                {
                    taskProgress.progressMessage = "Error while creating artcraft preview - " + ex.Message;
                    taskProgress.taskStatus = TaskProgress.Status.Error;
                }
        }

            UpdateProgressBar();
            UpdateModelSize(modelSize);
            UpdateExplodeLevel(explodeAmount);
        }

        private void PlaceIn3DViewer(GameObject modelToCenter)
        {
            modelToCenter.transform.position = Vector3.zero;
            modelToCenter.transform.parent = viewer3D.transform;
            modelToCenter.transform.position = -UnityUtil.GetMaxBounds(modelToCenter).center;
        }

        private void PlaceIn25DViewer(GameObject modelToCenter)
        {
            modelToCenter.transform.position = Vector3.zero;
            modelToCenter.transform.parent = viewer25D.transform;
            modelToCenter.transform.position = -UnityUtil.GetMaxBounds(modelToCenter).center;
        }

        private void UpdateModelSize(float newModelSize)
        {
            if (modelSize != newModelSize) parameterChanged = true;
            modelSize = newModelSize;
            if (currentModel == null) return;
            Bounds b = UnityUtil.GetMaxBounds(currentModel);
            float ratio = modelSize / ((b.max - b.min).magnitude + 1E-5f);
            currentModel.transform.localScale *= ratio;
            PlaceIn3DViewer(currentModel);
        }

        private void UpdateExplodeLevel(float newExplodeAmount)
        {
            this.explodeAmount = newExplodeAmount;
            if (current3DModel == null) return;
            current3DModel.GetComponent<ObjectExploder>().explodeAmount = explodeAmount/10f;
        }

        void UpdateCurrentModel()
        {
            Destroy(current2DModel);
            Destroy(current3DModel);
            Destroy(current25DModel);
            current2DModel = null;
            current3DModel = null;
            current25DModel = null;
            currentPattern = null;
            currentFaces = UnityUtil.CountFaces(currentModel);
            UpdateModelSize(modelSize);
            UpdateParametersPanel();
            PlaceIn3DViewer(currentModel);
            SetViewMode(ViewMode.Model);
        }

        private void SetViewMode(ViewMode viewMode)
        {
            mode = viewMode;

            backCamera.enabled = mode == ViewMode.Model2D;
            frontCamera.enabled = mode == ViewMode.Model2D;
            orbitCamera.enabled = mode != ViewMode.Model2D;

            viewer3D.SetActive(mode == ViewMode.Model || mode == ViewMode.Model3D);
            viewer25D.SetActive(mode == ViewMode.Model25D);
            viewer2D.SetActive(mode == ViewMode.Model2D);

            if (currentModel != null) currentModel.SetActive(mode == ViewMode.Model);
            if (current2DModel != null) current2DModel.SetActive(mode == ViewMode.Model2D);
            if (current3DModel != null) current3DModel.SetActive(mode == ViewMode.Model3D);
            if (current25DModel != null) current25DModel.SetActive(mode == ViewMode.Model25D);
        }
    }
}