using System;
using System.Collections.Generic;
using Unfolder;
using UnityEngine;
using Parabox.Stl;
using System.IO;
using PdfSharp.Pdf;
using PdfSharp.Drawing;
using PdfSharp;

public class Paperman
{
    public static Pattern GetPattern(PapermanPlayer player, TaskProgress taskProgress)
    {
        GameObject model = player.currentModel;
        String name = model.name;
        Debug.Log("Object 3D found : " + name);

        //UnityUtil.Merge(model);


        Debug.Log("Starting pattern building...");
        Pattern p = new Pattern(model, taskProgress)
        {
            stripAngle = player.stripAngle,
            stripHeight = player.stripHeight,
            stripMinAngle = player.stripMinAngle,
            stripMinHeight = player.stripMinHeight,
            foldLimitAngle = player.foldLimitAngle,
            lineThickness = player.lineThickness,
            angleNoFold = player.angleNoFold,
            polyReduceFactor = player.polyReduceFactor,
            sheetMargin = player.sheetMargin,
            shapeMaxSizeRatio = player.shapeMaxSizeRatio,
            sheetSize = player.sheetSize,
            resolutionDPI = player.resolutionDPI,
            acceptMixedMaterials = player.acceptMixedMaterials,
            pieceThickness = player.pieceThickness,
            foldThickness = player.foldThickness,
            iterations = player.iterations
        };
        return p;
    }

    public static void BuildPdf(List<String> filePaths, String name, String path, Vector2 sheetSize)
    {
        PdfDocument doc = new PdfDocument();
        int page = 0;
        foreach (var filePath in filePaths)
        {
            PdfPage pdfPage = new PdfPage(); // TODO Pb A4 inexact
            pdfPage.Width = new XUnit(Math.Round(sheetSize.x * 72f / 2.54f), XGraphicsUnit.Point);
            pdfPage.Height = new XUnit(Math.Round(sheetSize.y * 72f / 2.54f), XGraphicsUnit.Point);
            doc.Pages.Add(pdfPage);
            XGraphics xgr = XGraphics.FromPdfPage(doc.Pages[page]);
            // TODO Not working on Mac due to GDIPlus not found...
            XImage img = XImage.FromFile(filePath);
            xgr.DrawImage(img, 0, 0, doc.Pages[page].Width, doc.Pages[page].Height);
            page++;
        }
        doc.Save(Path.Combine(path, name+".pdf"));
        doc.Close();
    }

    public static String Capture3DImage(Pattern p, Camera camera, float resolutionDPI, String name, String path)
    {
        String extension = ".png";
        float pixelPerCm = resolutionDPI / 2.54f;
        int width = (int)(p.sheetSize.x * pixelPerCm);
        int height = (int)(p.sheetSize.y * pixelPerCm);
        String filePath = Path.Combine(path, name + extension);
        SheetCapture.Capture(camera, filePath, width, height);
        return filePath;
    }

    public static List<String> ExportChildrenInSTL(GameObject parent, String path)
    {
        String extensionStl = ".stl";
        int i = 0;
        var paths = new List<string>();
        foreach (Transform child in parent.transform)
        {
            i++;
            GameObject sheet = child.gameObject;
            String filePath = Path.Combine(path, parent.name + "_" + i + extensionStl);
            paths.Add(filePath);
            Exporter.Export(filePath, new GameObject[] { sheet }, FileType.Binary);
        }
        return paths;
    }
}
