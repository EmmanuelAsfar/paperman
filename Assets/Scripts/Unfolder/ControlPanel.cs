using System;
using UnityEngine;
using UnityEngine.UIElements;

namespace Unfolder
{
    public class ControlPanel
    {
        public static readonly int colorCount = 6;

        public Button ImportModelFromFile;
        public Button RotateModel;
        public Button PickInLibrary;
        public Button ReduceMesh;
        public Button GeneratePreview;
        public Button GenerateArtcraft;
        public Button SaveArtcraft;
        public Button Cancel;
        public Button View2D;
        public Button View25D;
        public Button ViewModel;
        public Button ViewPreview;
        public Button PreviousSwatch;
        public Button NextSwatch;

        public Button[] colorButtons;

        public Slider ModelSize;
        public Slider ExplodeAmount;

        public Slider PageWidth;
        public Slider PageHeight;
        public Slider WidthMargin;
        public Slider HeightMargin;
        public Slider TargetFaces;
        public Toggle SortColors;
        public Toggle Create2D;
        public Toggle Create25D;

        public Toggle SimilarTones;


        public TextField FaceCount;

        public ControlPanel(VisualElement root)
        {
            ImportModelFromFile = root.Q<Button>("ImportModelFromFile");
            RotateModel = root.Q<Button>("RotateModel");
            PickInLibrary = root.Q<Button>("PickInLibrary");
            ReduceMesh = root.Q<Button>("ReduceMesh");
            GeneratePreview = root.Q<Button>("GeneratePreview");
            GenerateArtcraft = root.Q<Button>("GenerateArtcraft");
            SaveArtcraft = root.Q<Button>("SaveArtcraft");
            Cancel = root.Q<Button>("Cancel");
            ViewModel = root.Q<Button>("ViewModel");
            ViewPreview = root.Q<Button>("ViewPreview");
            View2D = root.Q<Button>("View2D");
            View25D = root.Q<Button>("View25D");
            PreviousSwatch = root.Q<Button>("PreviousSwatch");
            NextSwatch = root.Q<Button>("NextSwatch");

            ModelSize = root.Q<Slider>("ModelSize");
            ExplodeAmount = root.Q<Slider>("ExplodeAmount");

            PageWidth = root.Q<Slider>("PageWidth");
            PageHeight = root.Q<Slider>("PageHeight");
            WidthMargin = root.Q<Slider>("WidthMargin");
            HeightMargin = root.Q<Slider>("HeightMargin");
            TargetFaces = root.Q<Slider>("TargetFaces");
            SortColors = root.Q<Toggle>("SortColors");
            Create2D = root.Q<Toggle>("Create2D");
            Create25D = root.Q<Toggle>("Create25D");

            SimilarTones = root.Q<Toggle>("SimilarTones");

            FaceCount = root.Q<TextField>("FaceCount");

            colorButtons = new Button[colorCount];
            for (int i = 0; i < colorCount; i++)
                colorButtons[i] = root.Q<Button>("Color"+i);
        }
    }
}