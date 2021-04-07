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

        [Range(500, 10000)]
        public int maxReduceFaces = 2000;

        public bool acceptMixedMaterials = true;
        [Range(3, 100)]
        public float modelSize = 40f; // Size of the target model (diagonal)
        [Range(0, 5)]
        public float explodeAmount = 1f; // Size of the target model (diagonal)

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

        public UnityEngine.Color errorColor, warningColor, okColor;

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
        private bool create2D;
        private bool create25D;
        private int targetFaces;
        private int currentFaces;
        private int originalFaces;

        private string modelName;
        private string savePath;
        private string loadPath = ".";
        private static int tempId;
        

        private TaskProgress taskProgress;
        private bool parameterChanged;

        private MainControlPanel mainPanel;
        private ColorPalette palette;

        private VisualElement rootPanel;
        public GameObject viewer2D, viewer3D, viewer25D;

        void OnEnable()
        {
            palette = new ColorPalette(MainControlPanel.colorCount);
            palette.InitNicePalette();

            rootPanel = GetComponent<UIDocument>().rootVisualElement;
            mainPanel = new MainControlPanel(rootPanel, palette);

            mainPanel.ImportModelFromFile.RegisterCallback<ClickEvent>(ev => ImportModelFromFile(false));
            mainPanel.RotateModel.RegisterCallback<ClickEvent>(ev => RotateModel());
            mainPanel.PickInLibrary.RegisterCallback<ClickEvent>(ev => PickInLibrary());
            mainPanel.ReduceMesh.RegisterCallback<ClickEvent>(ev => ReduceMesh());
            mainPanel.GeneratePreview.RegisterCallback<ClickEvent>(ev => GeneratePreview());
            mainPanel.GenerateArtcraft.RegisterCallback<ClickEvent>(ev => GenerateArtcraft());
            mainPanel.SaveArtcraft.RegisterCallback<ClickEvent>(ev => SaveArtcraft());
            mainPanel.Cancel.RegisterCallback<ClickEvent>(ev => Cancel());
            mainPanel.ViewModel.RegisterCallback<ClickEvent>(ev => SetViewMode(ViewMode.Model));
            mainPanel.ViewPreview.RegisterCallback<ClickEvent>(ev => SetViewMode(ViewMode.Model3D));
            mainPanel.View2D.RegisterCallback<ClickEvent>(ev => SetViewMode(ViewMode.Model2D));
            mainPanel.View25D.RegisterCallback<ClickEvent>(ev => SetViewMode(ViewMode.Model25D));
            mainPanel.SwitchFrontBack.RegisterCallback<ClickEvent>(ev => SwitchFrontBack());

            mainPanel.ModelSize.RegisterValueChangedCallback(x => UpdateModelSize(x.newValue));
            mainPanel.ExplodeAmount.RegisterValueChangedCallback(x => UpdateExplodeLevel(x.newValue));

            mainPanel.NextSwatch.RegisterCallback<ClickEvent>(ev => { palette.NextSwatch(); ApplySwatch(); });
            mainPanel.PreviousSwatch.RegisterCallback<ClickEvent>(ev => { palette.PreviousSwatch(); ApplySwatch(); });
            mainPanel.ShuffleSwatch.RegisterCallback<ClickEvent>(ev => { palette.ShuffleSwatch(); ApplySwatch(); });
            mainPanel.SimilarTones.RegisterValueChangedCallback(x => UpdateParametersPanel());

            mainPanel.PageWidth.RegisterValueChangedCallback(x => { parameterChanged = true; UpdateParametersPanel(); });
            mainPanel.PageHeight.RegisterValueChangedCallback(x => { parameterChanged = true; UpdateParametersPanel(); });
            mainPanel.WidthMargin.RegisterValueChangedCallback(x => { parameterChanged = true; UpdateParametersPanel(); });
            mainPanel.HeightMargin.RegisterValueChangedCallback(x => { parameterChanged = true; UpdateParametersPanel(); });
            mainPanel.TargetFaces.RegisterValueChangedCallback(x => UpdateParametersPanel());
            mainPanel.SortColors.RegisterValueChangedCallback(x => { parameterChanged = true; UpdateParametersPanel(); });
            mainPanel.Create2D.RegisterValueChangedCallback(x => UpdateParametersPanel());
            mainPanel.Create25D.RegisterValueChangedCallback(x => UpdateParametersPanel());

            taskProgress = new TaskProgress();
            taskProgress.Ok("Ready", 0);

            UpdateParametersPanel();
        }

        private void ApplySwatch()
        {
            UpdateParametersPanel();
            if (currentModel != null)
                UnityUtil.ApplySwatch(currentModel, palette.GetSwatch());
        }

        private void Start()
        {
            ImportModelFromFile(true);
            UpdateModelSize(modelSize);
            UpdateExplodeLevel(explodeAmount);
        }

        private void UpdateProgressBar()
        {
            mainPanel.Cancel.SetEnabled(taskProgress.IsComputing());
            mainPanel.ProgressMessage.text = taskProgress.GetProgressMessage();
            if (taskProgress.taskStatus == TaskProgress.Status.Error) mainPanel.ProgressAmount.style.backgroundColor = errorColor;
            if (taskProgress.taskStatus == TaskProgress.Status.Warning) mainPanel.ProgressAmount.style.backgroundColor = warningColor;
            if (taskProgress.taskStatus == TaskProgress.Status.Ok) mainPanel.ProgressAmount.style.backgroundColor = okColor;
            mainPanel.ProgressAmount.style.width = new StyleLength(new Length(taskProgress.progressAmount * 100, LengthUnit.Percent));
        }

        private void UpdateParametersPanel()
        {
            if (rootPanel.enabledSelf) {
                explodeAmount = mainPanel.ExplodeAmount.value;
                modelSize = mainPanel.ModelSize.value;
                acceptMixedMaterials = !mainPanel.SortColors.value;
                create2D = mainPanel.Create2D.value;
                create25D = mainPanel.Create25D.value;
                mainPanel.TargetFaces.highValue = Math.Min(originalFaces, maxReduceFaces);
                targetFaces = (int)mainPanel.TargetFaces.value;
                sheetSize = new Vector2(mainPanel.PageWidth.value / 10f, mainPanel.PageHeight.value / 10f);
                sheetMargin = new Vector2(mainPanel.WidthMargin.value / 10f, mainPanel.HeightMargin.value / 10f);
                mainPanel.FaceCount.value = currentModel == null ? "" : "" + currentFaces;
                mainPanel.SaveArtcraft.SetEnabled((current2DModel != null || !create2D) && (current25DModel != null || !create25D));
            }
            mainPanel.UpdateSwatch();
            mainPanel.ControlPanel.SetEnabled(!taskProgress.IsComputing());
            mainPanel.RotateModel.visible = mode == ViewMode.Model;
            mainPanel.ExplodeAmount.visible = mode == ViewMode.Model3D;
            mainPanel.SwitchFrontBack.visible = mode == ViewMode.Model2D;
            UpdateProgressBar();
        }

        private void ImportModelFromFile(bool loadDefault)
        {
            GameObject newModel;
            if (loadDefault) {
                newModel = ModelLoader.LoadModel(Path.Combine(Application.dataPath, "Resources/DefaultModel.dae"));
            } else {
                taskProgress.Ok("Picking a model file", 0);
                String filePath = UnityUtil.ChooseFile(loadPath);
                if (filePath == null)
                {
                    taskProgress.Warning("No model file selected", 1);
                    return;
                }
                loadPath = Path.GetDirectoryName(filePath);
                modelName = Path.GetFileNameWithoutExtension(filePath);
                newModel = ModelLoader.LoadModel(filePath);
                if (newModel == null)
                {
                    taskProgress.Error("Model loading failed : "+ filePath, 1);
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
            palette.AddSwatch(UnityUtil.GetSwatch(currentModel), true);
            UpdateCurrentModel();
            taskProgress.Ok("Model "+ modelName+ " loaded", 1);
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
            taskProgress.Ok("Model face count reduced from "+ faceBefore+" to "+ UnityUtil.CountFaces(currentModel), 1);
            UpdateCurrentModel();
        }

        private void RotateModel()
        {
            if (originalModel == null) return;
            originalModel.transform.Rotate(Vector3.right, 90);
            currentModel.transform.Rotate(Vector3.right, 90);
            taskProgress.Ok("Model rotated of 90°");
        }

        private void GeneratePreview()
        {
            if (taskProgress.IsComputing()) return;
            SetViewMode(ViewMode.Model);
            if (currentModel == null) return;
            currentPattern = Paperman.GetPattern(this, taskProgress);
            var t = new Task(() => {
                taskProgress.NotifyStart();
                try {
                    currentPattern.Compute();
                    parameterChanged = false;
                    requestBuild3D = true;
                    taskProgress.Ok("Artcraft preview generated", 1);
                } catch (Exception ex) {
                    currentPattern = null;
                    taskProgress.Error("Artcraft preview not generated : " + ex.Message);
                }
                taskProgress.NotifyStop();
            });
            t.Start();
        }

        private void GenerateArtcraft()
        {
            if (taskProgress.IsComputing()) return;
            if (currentModel == null) {
                taskProgress.Warning("Please load a model before computing", 1);
                return;
            }
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
                taskProgress.NotifyStart();
                try {
                    if (patternNotBuild) {
                        currentPattern.Compute();
                        parameterChanged = false;
                        requestBuild3D = true;
                    }
                    taskProgress.Ok("Optimizing artcraft shapes position", 0);
                    currentPattern.NestShapes(taskProgress);
                    taskProgress.Ok("Artcraft generated", 1);
                    requestUnfold = true;
                } catch (Exception ex) {
                    if (!requestBuild3D) currentPattern = null;
                    taskProgress.Error("Artcraft not generated : "+ex.Message);
                }
                taskProgress.NotifyStop();
            });
            t.Start();
        }

        private void SaveArtcraft()
        {
            if (currentPattern == null || (current2DModel == null && create2D) || (current25DModel == null && create25D))
            {
                taskProgress.Warning("Please generate an artcraft before saving", 1);
                return;
            }
            if (!create2D && !create25D)
            {
                taskProgress.Warning("Please generate at least one artcraft style (paper or 3D printing) before exporting", 1);
                return;
            }
            String filePath = UnityUtil.ChooseExportPath(savePath, modelName);
            if (filePath == null)
            {
                taskProgress.Warning("No export file chosen. Export cancelled", 1);
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
                List<String> pngFilesPath = currentPattern.Capture2DImages(tempPath);
                //Paperman.BuildPdf(pngFilesPath, currentModel.name, tempPath);
            }
            if (create25D)
            {
                SetViewMode(ViewMode.Model25D);
                Paperman.ExportChildrenInSTL(current25DModel, tempPath);
            }
            UnityUtil.ZipFiles(tempPath, filePath);
            taskProgress.Ok("Artcraft zip file generated here : "+ filePath, 1);
            SetViewMode(ViewMode.Model);
        }

        private void Cancel()
        {
            taskProgress.RequestInterruption();
        }

        private void SwitchView()
        {
            if (mode == ViewMode.Model25D) SetViewMode(ViewMode.Model);
            else if (mode == ViewMode.Model) SetViewMode(ViewMode.Model3D);
            else if (mode == ViewMode.Model3D) SetViewMode(ViewMode.Model2D);
            else if (mode == ViewMode.Model2D) SetViewMode(ViewMode.Model25D);
        }

        private void SwitchFrontBack()
        {
            backCamera.enabled = !backCamera.enabled;
        }

        void Update()
        {
            if (!taskProgress.IsComputing()) {
                if (Input.GetKeyDown("l")) ImportModelFromFile(false);
                if (Input.GetKeyDown("r")) ReduceMesh();
                if (Input.GetKeyDown("p")) GeneratePreview();
                if (Input.GetKeyDown("g")) GenerateArtcraft();
                if (Input.GetKeyDown(KeyCode.LeftControl) || Input.GetKeyDown(KeyCode.RightControl) || Input.GetKeyDown(KeyCode.LeftApple) || Input.GetKeyDown(KeyCode.RightApple)
                    && Input.GetKeyDown("s")) SaveArtcraft();
            }
            if (Input.GetKeyDown(KeyCode.Escape)) Cancel();
            if (Input.GetKeyDown(KeyCode.Space)) SwitchView();
            if (Input.GetKeyDown(KeyCode.LeftShift) || Input.GetKeyDown(KeyCode.RightShift)) SwitchFrontBack();

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
                    taskProgress.Error("Error while creating artcraft preview - "+ex.Message, 1);
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
                    taskProgress.Error("Error while creating artcraft preview - " + ex.Message, 1);
                }
        }

            UpdateParametersPanel();
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

            UpdateParametersPanel();
        }
    }
}