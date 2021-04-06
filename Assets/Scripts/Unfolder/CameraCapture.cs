using System;
using UnityEngine;

namespace Unfolder
{
    public class CameraCapture
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

            // Test
            // Test 2
        }
    }
}
