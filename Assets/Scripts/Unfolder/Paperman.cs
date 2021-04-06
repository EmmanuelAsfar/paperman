using System;
using System.Collections.Generic;
using Unfolder;
using UnityEngine;
using Parabox.Stl;
using System.IO;

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
            acceptMixedMaterials = player.acceptMixedMaterials,
            pieceThickness = player.pieceThickness,
            foldThickness = player.foldThickness,
            iterations = player.iterations
        };
        return p;
    }

    public static void Place2DCameras(Pattern p)
    {
        Camera camera2DFront = GameObject.Find("Render2DFront").GetComponent<Camera>();
        Camera camera2DBack = GameObject.Find("Render2DBack").GetComponent<Camera>();
        camera2DFront.orthographicSize = p.sheetSize.y / 2;
        camera2DBack.orthographicSize = p.sheetSize.y / 2;
        camera2DFront.transform.position = Vector3.forward * 10;
        camera2DBack.transform.position = -Vector3.forward * 10;
    }

    public static List<String> Capture2DImage(Pattern p, float resolutionDPI, String name, String path)
    {
        Camera camera2DFront = GameObject.Find("Render2DFront").GetComponent<Camera>();
        Camera camera2DBack = GameObject.Find("Render2DBack").GetComponent<Camera>();
        Place2DCameras(p);
        String extension = ".png";
        float pixelPerCm = resolutionDPI / 2.54f;
        int width = (int)(p.sheetSize.x * pixelPerCm);
        int height = (int)(p.sheetSize.y * pixelPerCm);
        
        var paths = new List<String>();
        for (int sheet = 0; sheet < p.sheetCount; sheet++)
        {
            camera2DFront.transform.position = (Vector3)p.sheetSize / 2 + Vector3.right * sheet * p.sheetMarginFactor * p.sheetSize.x + Vector3.forward * 10;
            camera2DBack.transform.position = (Vector3)p.sheetSize / 2 + Vector3.right * sheet * p.sheetMarginFactor * p.sheetSize.x - Vector3.forward * 10;
            String rectoPath = Path.Combine(path, name + "_recto_" + (sheet + 1) + extension);
            String versoPath = Path.Combine(path, name + "_verso_" + (sheet + 1) + extension);
            CameraCapture.Capture(camera2DFront, rectoPath, width, height);
            CameraCapture.Capture(camera2DBack, versoPath, width, height);
            paths.Add(rectoPath);
            paths.Add(versoPath);
        }
        camera2DFront.transform.position = (Vector3)p.sheetSize / 2 + Vector3.forward * 10;
        camera2DBack.transform.position = (Vector3)p.sheetSize / 2 - Vector3.forward * 10;
        return paths;
    }

    public static String Capture3DImage(Pattern p, Camera camera, float resolutionDPI, String name, String path)
    {
        String extension = ".png";
        float pixelPerCm = resolutionDPI / 2.54f;
        int width = (int)(p.sheetSize.x * pixelPerCm);
        int height = (int)(p.sheetSize.y * pixelPerCm);
        String filePath = Path.Combine(path, name + extension);
        CameraCapture.Capture(camera, filePath, width, height);
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
