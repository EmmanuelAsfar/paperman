using System;
using System.Collections;
using System.Collections.Generic;
using System.IO;
using System.Threading.Tasks;
using UnityEngine;
using UnityEngine.UIElements;

public enum ViewMode { Model, ModelRender, Model3D, Model2D, Model25D }

namespace Unfolder {
    public class PapermanPlayer : MonoBehaviour
    {
        public static Vector2 A4Size = new Vector2(21f, 29.7f);
        public static Vector2 A3Size = new Vector2(42f, 29.7f);
        public static Vector2 LetterSize = new Vector2(21.6f, 27.9f);
        public static Vector2 StandardMargins = new Vector2(0.6f, 0.6f);

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
        public float explodeAmount = 0.5f;

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
        public float resolutionDPI = 200f;

        // Pour impression3D
        [Range(0, 20f)]
        public float foldLimitAngle = 5f;
        [Range(0, 1f)]
        public float pieceThickness = 0.35f;
        [Range(0, 0.5f)]
        public float foldThickness = 0.08f;

        public Color errorColor, warningColor, okColor;

        private GameObject originalModel;
        public GameObject currentModel;
        private Pattern currentPattern;
        private GameObject current2DModel;
        private GameObject current3DModel;
        private GameObject current25DModel;

        public Color activeColor = Color.cyan;
        public Color passiveColor = Color.gray;

        public Camera orbitCamera;
        public Camera backCamera;
        public Camera frontCamera;

        public GameObject scale;
        public GameObject mainPage;
        public GameObject mainSheet;

        public TextMesh titleMesh;
        public TextMesh authorMesh;

        public ViewMode mode;

        private bool requestBuild3D;
        private bool requestUnfold;
        private bool requestExport;

        private bool createPNG;
        private bool createPDF;
        private bool create25D;
        private int targetFaces;
        private int currentFaces;
        private int originalFaces;

        private string modelName;
        private string savePath;
        private string exportPath; // path of the export zip file
        private string loadPath = ".";
        private static int tempId;
        

        private TaskProgress taskProgress;
        private bool requireRecompute;
        private bool backView = false;

        public MainControlPanel mainPanel;
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
            mainPanel.ReduceMesh.RegisterCallback<ClickEvent>(ev => ReduceMesh());
            mainPanel.GeneratePreview.RegisterCallback<ClickEvent>(ev => GeneratePreview());
            mainPanel.GenerateArtcraft.RegisterCallback<ClickEvent>(ev => GenerateArtcraft());
            mainPanel.SaveArtcraft.RegisterCallback<ClickEvent>(ev => SaveArtcraft());
            mainPanel.Cancel.RegisterCallback<ClickEvent>(ev => Cancel());
            mainPanel.ViewModel.RegisterCallback<ClickEvent>(ev => SetViewMode(ViewMode.Model));
            mainPanel.ViewPreview.RegisterCallback<ClickEvent>(ev => SetViewMode(ViewMode.Model3D));
            mainPanel.ViewMainPage.RegisterCallback<ClickEvent>(ev => SetViewMode(ViewMode.ModelRender));
            mainPanel.View2DFront.RegisterCallback<ClickEvent>(ev => { backView = false; SetViewMode(ViewMode.Model2D); });
            mainPanel.View2DBack.RegisterCallback<ClickEvent>(ev => { backView = true; SetViewMode(ViewMode.Model2D); });
            mainPanel.View25D.RegisterCallback<ClickEvent>(ev => SetViewMode(ViewMode.Model25D));
            mainPanel.A4Size.RegisterCallback<ClickEvent>(ev => UpdatePageSetup(A4Size, StandardMargins));
            mainPanel.A3Size.RegisterCallback<ClickEvent>(ev => UpdatePageSetup(A3Size, StandardMargins));
            mainPanel.LetterSize.RegisterCallback<ClickEvent>(ev => UpdatePageSetup(LetterSize, StandardMargins));

            mainPanel.ModelSize.RegisterValueChangedCallback(x => UpdateModelSize(x.newValue));
            mainPanel.ExplodeAmount.RegisterValueChangedCallback(x => UpdateExplodeLevel(x.newValue));

            mainPanel.NextSwatch.RegisterCallback<ClickEvent>(ev => { palette.NextSwatch(); ApplySwatch(); });
            mainPanel.PreviousSwatch.RegisterCallback<ClickEvent>(ev => { palette.PreviousSwatch(); ApplySwatch(); });
            mainPanel.ShuffleSwatch.RegisterCallback<ClickEvent>(ev => { palette.ShuffleSwatch(); ApplySwatch(); });
            mainPanel.SimilarTones.RegisterValueChangedCallback(x => UpdateParametersPanel());

            mainPanel.PageWidth.RegisterValueChangedCallback(x => { requireRecompute = true; UpdateParametersPanel(); });
            mainPanel.PageHeight.RegisterValueChangedCallback(x => { requireRecompute = true; UpdateParametersPanel(); });
            mainPanel.WidthMargin.RegisterValueChangedCallback(x => { requireRecompute = true; UpdateParametersPanel(); });
            mainPanel.HeightMargin.RegisterValueChangedCallback(x => { requireRecompute = true; UpdateParametersPanel(); });
            mainPanel.Title.RegisterValueChangedCallback(x => { UpdateMainPage(); });
            mainPanel.Author.RegisterValueChangedCallback(x => { UpdateMainPage(); });

            mainPanel.SortColors.RegisterValueChangedCallback(x => { requireRecompute = true; UpdateParametersPanel(); });
            mainPanel.TargetFaces.RegisterValueChangedCallback(x => UpdateParametersPanel());
            mainPanel.CreatePNG.RegisterValueChangedCallback(x => UpdateParametersPanel());
            mainPanel.CreatePDF.RegisterValueChangedCallback(x => UpdateParametersPanel());
            mainPanel.Create25D.RegisterValueChangedCallback(x => UpdateParametersPanel());

            taskProgress = new TaskProgress();
            taskProgress.Ok("Ready", 0);

            UpdateParametersPanel();
        }

        private void Start()
        {
            SetViewMode(ViewMode.Model);
            ImportModelFromFile(true);
            UpdateModelSize(modelSize);
            UpdateParametersPanel();
            UpdateExplodeLevel(explodeAmount);
        }

        private void ApplySwatch()
        {
            UpdateParametersPanel();
            UnityUtil.ApplySwatch(currentModel, -1, palette.GetSwatch());
            if (currentPattern == null) return;
            int subMeshCount = currentPattern.meshStructure.subMeshCount;
            UnityUtil.ApplySwatch(current3DModel, subMeshCount, palette.GetSwatch());
            UnityUtil.ApplySwatch(current2DModel, subMeshCount, palette.GetSwatch());
            UnityUtil.ApplySwatch(current25DModel, subMeshCount, palette.GetSwatch());
        }

        private void UpdatePageSetup(Vector2 sheetSize, Vector2 sheetMargin)
        {
            this.sheetSize = sheetSize;
            this.sheetMargin = sheetMargin;
            mainPanel.PageWidth.value = (int)(sheetSize.x*10);
            mainPanel.PageHeight.value = (int)(sheetSize.y*10);
            mainPanel.WidthMargin.value = (int)(sheetMargin.x*10);
            mainPanel.HeightMargin.value = (int)(sheetMargin.y*10);
            requireRecompute = true;
        }

        private void UpdateProgressBar()
        {
            mainPanel.ControlPanel.SetEnabled(!taskProgress.IsComputing());
            mainPanel.Cancel.SetEnabled(taskProgress.IsComputing());
            mainPanel.ProgressMessage.text = taskProgress.GetProgressMessage();
            if (taskProgress.taskStatus == TaskProgress.Status.Error) mainPanel.ProgressAmount.style.backgroundColor = errorColor;
            if (taskProgress.taskStatus == TaskProgress.Status.Warning) mainPanel.ProgressAmount.style.backgroundColor = warningColor;
            if (taskProgress.taskStatus == TaskProgress.Status.Ok) mainPanel.ProgressAmount.style.backgroundColor = okColor;
            mainPanel.ProgressAmount.style.width = new StyleLength(new Length(taskProgress.progressAmount * 100, LengthUnit.Percent));
        }

        private void UpdateMainPage()
        {
            if (currentPattern == null || currentModel == null || mode != ViewMode.ModelRender) return;
            float scale = orbitCamera.fieldOfView / currentPattern.sheetSize.y; // TODO Erroné ce n'est pas FOV. Revoir formule avec distance Page et FOV
            mainSheet.transform.localScale = new Vector3(currentPattern.sheetSize.x, currentPattern.sheetSize.y, 1) * 10 * scale;
            titleMesh.text = mainPanel.Title.text;
            authorMesh.text = mainPanel.Author.text;
        }

        private void UpdateParametersPanel()
        {
            explodeAmount = mainPanel.ExplodeAmount.value;
            acceptMixedMaterials = !mainPanel.SortColors.value;
            createPNG = mainPanel.CreatePNG.value;
            createPDF = mainPanel.CreatePDF.value;
            create25D = mainPanel.Create25D.value;
            mainPanel.TargetFaces.highValue = Math.Min(originalFaces, maxReduceFaces);
            targetFaces = (int)mainPanel.TargetFaces.value;
            sheetSize = new Vector2(mainPanel.PageWidth.value / 10f, mainPanel.PageHeight.value / 10f);
            sheetMargin = new Vector2(mainPanel.WidthMargin.value / 10f, mainPanel.HeightMargin.value / 10f);

            mainPanel.FaceCount.text = currentModel == null ? "" : "(currently " + currentFaces+" faces)";;
            mainPanel.RotateModel.visible = (mode == ViewMode.Model || mode == ViewMode.ModelRender) && currentModel != null;
            mainPanel.ExplodeAmount.visible = mode == ViewMode.Model3D;

            mainPanel.ViewModel.visible = currentModel != null;
            mainPanel.ViewPreview.visible = current3DModel != null;
            mainPanel.View2DFront.visible = current2DModel != null;
            mainPanel.View2DBack.visible = current2DModel != null;
            mainPanel.View25D.visible = current25DModel != null;
            mainPanel.ViewMainPage.visible = current2DModel != null || current25DModel != null;

            mainPanel.SimplifyModel.visible = currentModel != null;
            mainPanel.ChooseColors.visible = currentModel != null;
            mainPanel.BuildArtcraft.visible = currentModel != null;
            mainPanel.ExportArtcraft.visible = requireRecompute == false && (current2DModel != null || current25DModel != null);

            mainPanel.ViewModel.style.backgroundColor = mode == ViewMode.Model ? activeColor : passiveColor;
            mainPanel.ViewPreview.style.backgroundColor = mode == ViewMode.Model3D ? activeColor : passiveColor;
            mainPanel.View2DFront.style.backgroundColor = (mode == ViewMode.Model2D && !backView) ? activeColor : passiveColor;
            mainPanel.View2DBack.style.backgroundColor = (mode == ViewMode.Model2D && backView) ? activeColor : passiveColor;
            mainPanel.View25D.style.backgroundColor = mode == ViewMode.Model25D ? activeColor : passiveColor;
            mainPanel.ViewMainPage.style.backgroundColor = mode == ViewMode.ModelRender ? activeColor : passiveColor;

            mainPanel.UpdateSwatch();
            UpdateProgressBar();
        }

        private void ImportModelFromFile(bool loadDefault)
        {
            try
            {
                GameObject newModel;
                if (loadDefault)
                {
                    return;
                    //newModel = ModelLoader.LoadModel(Path.Combine(Application.dataPath, "Resources/DefaultModel.dae"));
                }
                else
                {
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
                        taskProgress.Error("Model loading failed : " + filePath, 1);
                        return;
                    }
                }
                mainPanel.Title.value = modelName;
                DestroyImmediate(originalModel);
                DestroyImmediate(currentModel);
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
                taskProgress.Ok("Model " + modelName + " loaded", 1);
            } catch (Exception ex)
            {
                taskProgress.Error("Error loading model : "+ex.Message, 1);
            }
        }

        private void ReduceMesh()
        {
            if (originalModel == null) return;
            DestroyImmediate(currentModel);
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
            ApplySwatch();
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
            DestroyArtcrafts();
            currentPattern = Paperman.GetPattern(this, taskProgress);
            var t = new Task(() => {
                taskProgress.NotifyStart();
                try {
                    currentPattern.Compute();
                    requireRecompute = false;
                    requestBuild3D = true;
                    taskProgress.Ok("Artcraft preview generated", 1);
                } catch (Exception ex) {
                    Debug.Log(ex);
                    taskProgress.Error("Artcraft preview not generated : " + ex.Message);
                } finally {
                    taskProgress.NotifyStop();
                }
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
            if (currentPattern == null || requireRecompute) {
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
                        requireRecompute = false;
                        requestBuild3D = true;
                    }
                    taskProgress.Ok("Optimizing artcraft shapes position", 0);
                    currentPattern.NestShapes(taskProgress);
                    taskProgress.Ok("Artcraft generated", 1);
                    requestUnfold = true;
                } catch (Exception ex) {
                    Debug.Log(ex);
                    taskProgress.Error("Artcraft not generated : "+ex.Message);
                } finally {
                    taskProgress.NotifyStop();
                }
            });
            t.Start();
        }

        private void SaveArtcraft()
        {
            if (taskProgress.IsComputing()) return;
            if (currentPattern == null || (current2DModel == null && createPNG) || (current25DModel == null && create25D))
            {
                taskProgress.Warning("Please generate an artcraft before saving", 1);
                return;
            }
            if (!createPNG && !createPDF && !create25D)
            {
                taskProgress.Warning("Please generate at least one artcraft style (paper or 3D printing) before exporting", 1);
                return;
            }
            String filePath = UnityUtil.ChooseExportPath(savePath, mainPanel.Title.value);
            if (filePath == null)
            {
                taskProgress.Warning("No export file chosen. Export cancelled", 1);
                return;
            }
            exportPath = filePath;
            requestExport = true;
        }

        private void Cancel()
        {
            taskProgress.RequestInterruption();
        }

        private void DestroyArtcrafts()
        {
            if (current2DModel != null) DestroyImmediate(current2DModel);
            if (current3DModel != null) DestroyImmediate(current3DModel);
            if (current25DModel != null) DestroyImmediate(current25DModel);
            current2DModel = null;
            current3DModel = null;
            current25DModel = null;
            currentPattern = null;
            SetViewMode(ViewMode.Model);
        }

        void Update()
        {
            if (Input.GetKeyDown(KeyCode.Escape)) Cancel();

            if (requestBuild3D)
            {
                try {
                    requestBuild3D = false;
                    if (current3DModel != null) {
                        DestroyImmediate(current3DModel);
                        current3DModel = null;
                    }
                    current3DModel = currentPattern.Build3DPatternObject();
                    PlaceIn3DViewer(current3DModel);
                    UpdateExplodeLevel(explodeAmount);
                    SetViewMode(ViewMode.Model3D);
                } catch (Exception ex)
                {
                    Debug.Log(ex);
                    taskProgress.Error("Error while creating artcraft preview - "+ex.Message, 1);
                    requestUnfold = false;
                    DestroyArtcrafts();
                }
            }

            if (requestUnfold)
            {
                try {
                    requestUnfold = false;
                    if (current2DModel != null) DestroyImmediate(current2DModel);
                    if (current25DModel != null) DestroyImmediate(current25DModel);
                    current2DModel = null;
                    current25DModel = null;
                    current2DModel = currentPattern.Build2DPatternObject();
                    current25DModel = currentPattern.Build25DPatternObject();
                    current2DModel.transform.parent = viewer2D.transform;
                    current2DModel.transform.position = Vector3.zero;
                    PlaceIn25DViewer(current25DModel);
                    SetViewMode(ViewMode.Model2D);
                } catch (Exception ex)
                {
                    Debug.Log(ex);
                    taskProgress.Error("Error while creating artcraft preview - " + ex.Message, 1);
                    DestroyArtcrafts();
                }
            }
            UpdateProgressBar();
        }

        public void LateUpdate()
        {
            if (!requestExport) return;
            requestExport = false;
            try
            {
                SetViewMode(ViewMode.ModelRender);
                UpdateMainPage();
                savePath = Path.GetDirectoryName(exportPath);
                String saveName = Path.GetFileNameWithoutExtension(exportPath);
                bool dirExist = true;
                String tempPath = null;
                while (dirExist)
                {
                    tempId++;
                    tempPath = Path.Combine(Application.temporaryCachePath, saveName + "_" + tempId);
                    dirExist = Directory.Exists(tempPath);
                }
                Directory.CreateDirectory(tempPath);
                Debug.Log("Export temps files at : " + tempPath);

                var pngFilesPath = new List<String>();
                if (createPNG || createPDF)
                {
                    SetViewMode(ViewMode.ModelRender);
                    pngFilesPath.AddRange(currentPattern.CaptureMainPage(tempPath, saveName));
                    SetViewMode(ViewMode.Model2D);
                    pngFilesPath.AddRange(currentPattern.Capture2DImages(tempPath, saveName, taskProgress));
                }
                if (create25D)
                {
                    SetViewMode(ViewMode.Model25D);
                    Paperman.ExportChildrenInSTL(current25DModel, tempPath);
                }
                var t = new Task(() => {
                    taskProgress.NotifyStart();
                    try
                    {
                        if (createPDF)
                        {
                            taskProgress.Ok("Creating " + pngFilesPath.Count + " pages in " + saveName + " pdf file", 0.5f);
                            Paperman.BuildPdf(pngFilesPath, saveName, tempPath, sheetSize, sheetMargin);
                        }
                        if (!createPNG) foreach (var pngFile in pngFilesPath) File.Delete(pngFile);

                        taskProgress.Ok("Crating artcraft zip file" + exportPath, 0.75f);
                        UnityUtil.ZipFiles(tempPath, exportPath);
                        taskProgress.Ok("Artcraft zip file generated here : " + exportPath, 1);
                    }
                    catch (Exception ex)
                    {
                        Debug.Log(ex);
                        taskProgress.Error("Artcraft export file not generated : " + ex.Message);
                    }
                    finally
                    {
                        taskProgress.NotifyStop();
                    }
                });
                t.Start();
            }
            catch (Exception ex)
            {
                Debug.Log(ex);
                taskProgress.Error("Coudn't save artcraft files : " + ex.Message);
            }
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
            requireRecompute = true;
            modelSize = newModelSize;
            if (currentModel == null) return;
            Bounds b = UnityUtil.GetMaxBounds(currentModel);
            float ratio = modelSize / ((b.max - b.min).magnitude + 1E-5f);
            currentModel.transform.localScale *= ratio;
            PlaceIn3DViewer(currentModel);
            UpdateParametersPanel();
        }

        public void UpdateExplodeLevel(float newExplodeAmount)
        {
            this.explodeAmount = newExplodeAmount;
            if (current3DModel == null) return;
            current3DModel.GetComponent<ObjectExploder>().explodeAmount = explodeAmount/10f;
        }

        void UpdateCurrentModel()
        {
            DestroyArtcrafts();
            currentFaces = UnityUtil.CountFaces(currentModel);
            UpdateModelSize(modelSize);
            UpdateParametersPanel();
            PlaceIn3DViewer(currentModel);
            SetViewMode(ViewMode.Model);
        }

        void UpdateCameraView()
        {
            backCamera.enabled = mode == ViewMode.Model2D && backView;
            frontCamera.enabled = mode == ViewMode.Model2D && !backView;
            orbitCamera.enabled = mode != ViewMode.Model2D;
        }

        private void SetViewMode(ViewMode viewMode)
        {
            mode = viewMode;

            scale.SetActive(mode == ViewMode.Model || mode == ViewMode.Model3D);
            mainPage.SetActive(mode == ViewMode.ModelRender);

            viewer3D.SetActive(mode == ViewMode.Model || mode == ViewMode.Model3D || mode == ViewMode.ModelRender);
            viewer25D.SetActive(mode == ViewMode.Model25D);
            viewer2D.SetActive(mode == ViewMode.Model2D);
            
            if (currentModel != null) currentModel.SetActive(mode == ViewMode.Model || mode == ViewMode.ModelRender);
            if (current2DModel != null) current2DModel.SetActive(mode == ViewMode.Model2D);
            if (current3DModel != null) current3DModel.SetActive(mode == ViewMode.Model3D);
            if (current25DModel != null) current25DModel.SetActive(mode == ViewMode.Model25D);

            UpdateParametersPanel();
            UpdateMainPage();
            UpdateCameraView();
        }
    }
}