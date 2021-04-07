using System;
using System.Collections;
using System.Collections.Generic;
using System.IO;
using Unfolder;
using UnityEngine;

public class SheetCapture
{
    public static void Capture(Camera camera, String fileName, int resWidth, int resHeight)
    {
        RenderTexture rt = new RenderTexture(resWidth, resHeight, 24);
        camera.targetTexture = rt;
        Texture2D screenShot = new Texture2D(resWidth, resHeight, TextureFormat.RGB24, false);
        camera.Render();
        RenderTexture.active = rt;
        screenShot.ReadPixels(new Rect(0, 0, resWidth, resHeight), 0, 0);
        camera.targetTexture = null;
        RenderTexture.active = null; // JC: added to avoid errors
        UnityEngine.Object.Destroy(rt);
        byte[] bytes = screenShot.EncodeToPNG();
        System.IO.File.WriteAllBytes(fileName, bytes);
    }

    public static List<String> CaptureSheet(String path, float resolutionDPI, GameObject sheetObject, Vector2 sheetSize)
    {
        Camera frontCamera = GameObject.Find("Render2DFront").GetComponent<Camera>();
        Camera backCamera = GameObject.Find("Render2DBack").GetComponent<Camera>();
        var paths = new List<String>();
        String extension = ".png";
        float pixelPerCm = resolutionDPI / 2.54f;
        int width = (int)(sheetSize.x * pixelPerCm);
        int height = (int)(sheetSize.y * pixelPerCm);
        frontCamera.orthographicSize = sheetSize.y / 2;
        backCamera.orthographicSize = sheetSize.y / 2;
        frontCamera.transform.position = sheetObject.transform.position + (Vector3)sheetSize / 2 + Vector3.forward * 10;
        backCamera.transform.position = sheetObject.transform.position + (Vector3)sheetSize / 2 + -Vector3.forward * 10;
        String rectoPath = Path.Combine(path, sheetObject.name + "_recto" + extension);
        String versoPath = Path.Combine(path, sheetObject.name + "_verso" + extension);
        Capture(frontCamera, rectoPath, width, height);
        Capture(backCamera, versoPath, width, height);
        paths.Add(rectoPath);
        paths.Add(versoPath);
        return paths;
    }
}