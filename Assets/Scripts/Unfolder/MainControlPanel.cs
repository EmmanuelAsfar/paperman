using System;
using UnityEngine;
using UnityEngine.UIElements;

namespace Unfolder
{
    public class MainControlPanel
    {
        public static readonly int colorCount = 6;

        public VisualElement NavigationPanel;
        public VisualElement ControlPanel;

        public VisualElement ChooseModel;
        public VisualElement SimplifyModel;
        public VisualElement ChooseColors;
        public VisualElement BuildArtcraft;
        public VisualElement ExportArtcraft;

        public Label ProgressMessage;
        public VisualElement ProgressAmount;

        public Button ImportModelFromFile;
        public Button RotateModel;
        public Button ReduceMesh;
        public Button GeneratePreview;
        public Button GenerateArtcraft;
        public Button SaveArtcraft;
        public Button Cancel;
        public Button View2DFront;
        public Button View2DBack;
        public Button View25D;
        public Button ViewModel;
        public Button ViewPreview;
        public Button ViewMainPage;
        public Button PreviousSwatch;
        public Button NextSwatch;
        public Button ShuffleSwatch;
        public Button A4Size;
        public Button A3Size;
        public Button LetterSize;

        public Button[] colorButtons;

        public Slider ModelSize;
        public Slider ExplodeAmount;

        public Slider PageWidth;
        public Slider PageHeight;
        public Slider WidthMargin;
        public Slider HeightMargin;
        public Slider TargetFaces;
        public Toggle SortColors;
        public Toggle CreatePNG;
        public Toggle CreatePDF;
        public Toggle Create25D;

        public Toggle SimilarTones;


        public Label FaceCount;
        public TextField Title;
        public TextField Author;

        private readonly ColorPalette palette;

        public MainControlPanel(VisualElement root, ColorPalette palette)
        {
            this.palette = palette;

            NavigationPanel = root.Q<VisualElement>("NavigationPanel");
            ControlPanel = root.Q<VisualElement>("ControlPanel");
            ChooseModel = root.Q<VisualElement>("ChooseModel");
            SimplifyModel = root.Q<VisualElement>("SimplifyModel");
            ChooseColors = root.Q<VisualElement>("ChooseColors");
            BuildArtcraft = root.Q<VisualElement>("BuildArtcraft");
            ExportArtcraft = root.Q<VisualElement>("ExportArtcraft");

            ProgressMessage = root.Q<Label>("ProgressMessage");
            ProgressAmount = root.Q<VisualElement>("ProgressAmount");

            ImportModelFromFile = root.Q<Button>("ImportModelFromFile");
            RotateModel = root.Q<Button>("RotateModel");
            ReduceMesh = root.Q<Button>("ReduceMesh");
            GeneratePreview = root.Q<Button>("GeneratePreview");
            GenerateArtcraft = root.Q<Button>("GenerateArtcraft");
            SaveArtcraft = root.Q<Button>("SaveArtcraft");
            Cancel = root.Q<Button>("Cancel");
            ViewModel = root.Q<Button>("ViewModel");
            ViewPreview = root.Q<Button>("ViewPreview");
            ViewMainPage = root.Q<Button>("ViewMainPage");
            View2DFront = root.Q<Button>("View2DFront");
            View2DBack = root.Q<Button>("View2DBack");
            View25D = root.Q<Button>("View25D");
            PreviousSwatch = root.Q<Button>("PreviousSwatch");
            NextSwatch = root.Q<Button>("NextSwatch");
            ShuffleSwatch = root.Q<Button>("ShuffleSwatch");
            A4Size = root.Q<Button>("A4Size");
            A3Size = root.Q<Button>("A3Size");
            LetterSize = root.Q<Button>("LetterSize");

            ModelSize = root.Q<Slider>("ModelSize");
            ExplodeAmount = root.Q<Slider>("ExplodeAmount");

            PageWidth = root.Q<Slider>("PageWidth");
            PageHeight = root.Q<Slider>("PageHeight");
            WidthMargin = root.Q<Slider>("WidthMargin");
            HeightMargin = root.Q<Slider>("HeightMargin");
            TargetFaces = root.Q<Slider>("TargetFaces");
            SortColors = root.Q<Toggle>("SortColors");
            CreatePNG = root.Q<Toggle>("CreatePNG");
            CreatePDF = root.Q<Toggle>("CreatePDF");
            Create25D = root.Q<Toggle>("Create25D");

            SimilarTones = root.Q<Toggle>("SimilarTones");

            FaceCount = root.Q<Label>("FaceCount");
            Title = root.Q<TextField>("Title");
            Author = root.Q<TextField>("Author");

            colorButtons = new Button[colorCount];
            for (int i = 0; i < colorCount; i++)
                colorButtons[i] = root.Q<Button>("Color"+i);
        }

        public void UpdateSwatch()
        {
            for (int i = 0; i < colorCount; i++)
                colorButtons[i].style.backgroundColor = palette.GetSwatch()[i];
        }
    }
}