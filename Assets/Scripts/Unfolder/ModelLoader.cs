using System;
using System.IO;
using Parabox.Stl;
using UnityEngine;

public class ModelLoader
{
    public static GameObject LoadSTLModel(String path)
    {
        Mesh[] meshes = Importer.Import(path);

        if (meshes == null) return null;

        Material material = Resources.Load("Material/DefaultMaterial", typeof(Material)) as Material;
        GameObject object3D = new GameObject(Path.GetFileNameWithoutExtension(path));
        for (int i = 0; i < meshes.Length; i++)
        {
            GameObject object3Di = new GameObject("Mesh_" + i);
            var mf = object3Di.AddComponent<MeshFilter>();
            mf.mesh = meshes[i];
            var mr = object3Di.AddComponent<MeshRenderer>();
            mr.sharedMaterial = material;
            object3Di.transform.parent = object3D.transform;
        }
        return object3D;
    }

    public static GameObject LoadModel(String path)
    {
        var importer = new CustomAssetImporter();
        Material material = Resources.Load("Material/DefaultMaterial", typeof(Material)) as Material;
        GameObject object3D = importer.LoadModel(path, material, true, true);
        if (object3D == null) return null;
        object3D.name = Path.GetFileNameWithoutExtension(path);
        return object3D;
    }
}
