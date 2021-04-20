using Assimp;
using Assimp.Configs;
using System;
using System.Collections;
using System.Collections.Generic;
using System.IO;
using System.Web;
using UnityEngine;

public class CustomAssetImporter
{

    Assimp.AssimpContext importer;
    Assimp.PostProcessSteps postProcessSteps;

    private List<UnityEngine.Mesh> meshes;
    //private List<Materila> meshes;

    public CustomAssetImporter()
    {
        // Import Settings
        importer = new Assimp.AssimpContext();
        importer.SetConfig(new Assimp.Configs.MeshVertexLimitConfig(60000));
        importer.SetConfig(new Assimp.Configs.MeshTriangleLimitConfig(60000));
        importer.SetConfig(new Assimp.Configs.RemoveDegeneratePrimitivesConfig(true));
        importer.SetConfig(new Assimp.Configs.SortByPrimitiveTypeConfig(Assimp.PrimitiveType.Line | Assimp.PrimitiveType.Point));

        postProcessSteps = Assimp.PostProcessPreset.TargetRealTimeMaximumQuality | Assimp.PostProcessSteps.MakeLeftHanded | Assimp.PostProcessSteps.FlipWindingOrder;
    }

    Scene ImportModel(string modelPath)
    {
        if (File.Exists(modelPath))
        {
            String rootPath = Path.GetDirectoryName(modelPath);
            var fios = new FileIOSystem(new string[] { rootPath });
            importer.SetIOSystem(fios);
            Scene scene = importer.ImportFile(Path.GetFileName(modelPath), postProcessSteps);
            if (scene != null)
            {
                Debug.Log("Model Successfully Loaded");

                return scene;
            }
        }
        else
        {
            Debug.Log("ImportModel : File not available at path : " + modelPath);
        }

        return null;
    }

    private static Color Convert(Color4D color) => new Color(color.R, color.G, color.B, color.A);

    public List<UnityEngine.Material> GetMaterials(Scene assImpScene)
    {
        var mats = new List<UnityEngine.Material>();
        if (assImpScene == null) return null;
        foreach (var material in assImpScene.Materials)
        {
            UnityEngine.Material mat = new UnityEngine.Material(Shader.Find("Standard"));
            if (material.HasName) mat.name = material.Name;
            if (material.HasColorAmbient) mat.SetColor("_Color", Convert(material.ColorAmbient));
            if (material.HasColorDiffuse) mat.SetColor("_Color", Convert(material.ColorDiffuse));
            mats.Add(mat);
        }
        return mats;
    }

    public List<int> GetMaterialIndexes(Scene assImpScene)
    {
        var matIndexes = new List<int>();
        foreach (var assImpMesh in assImpScene.Meshes)
            matIndexes.Add(assImpMesh.MaterialIndex);
        return matIndexes;
    }

    public List<UnityEngine.Mesh> GetMeshes(Scene assImpScene, bool shouldCalculateNormals, bool shouldCalculateTangents)
    {
        var meshes = new List<UnityEngine.Mesh>();
        foreach (var assImpMesh in assImpScene.Meshes)
        {
            UnityEngine.Mesh mesh = new UnityEngine.Mesh();
            mesh.indexFormat = UnityEngine.Rendering.IndexFormat.UInt32;

            // Verticecs - Uvs and Tri's should be in this specific order to work. 
            // Vertices
            mesh.vertices = assImpMesh.Vertices != null ? assImpMesh.Vertices.ConvertAll(item => new Vector3(item.X, item.Y, item.Z)).ToArray() : null;

            // uvs
            mesh.uv = assImpMesh.HasTextureCoords(0) && assImpMesh.TextureCoordinateChannels[0] != null ? assImpMesh.TextureCoordinateChannels[0].ConvertAll(item => new Vector2(item.X, item.Y)).ToArray() : null;

            // Triangles
            mesh.triangles = assImpMesh.GetIndices();

            // normals
            mesh.normals = assImpMesh.HasNormals && assImpMesh.Normals != null ? assImpMesh.Normals.ConvertAll(item => new Vector3(item.X, item.Y, item.Y)).ToArray() : null;
            mesh.tangents = assImpMesh.Tangents != null ? assImpMesh.Tangents.ConvertAll(item => new Vector4(item.X, item.Y, item.Z, 1)).ToArray() : null;

            bool noNormalsData = mesh.normals == null || mesh.normals.Length == 0;
            bool noTangensData = mesh.tangents == null || mesh.tangents.Length == 0;

            // sometimes normals and tangents data is wrong .. to fix this we can recalculate them. 
            // this can be toggled 
            if (noNormalsData || shouldCalculateNormals)
            {
                if (noNormalsData) Debug.Log("Mesh Normals are null");
                mesh.RecalculateNormals(0);
            }

            if (noTangensData || shouldCalculateTangents)
            {
                if (noTangensData) Debug.Log("Mesh Normals are null");
                mesh.RecalculateTangents();
                //mesh.CustomRecalculateTangents();
            }
            mesh.name = assImpMesh.Name;
            Debug.Log("Mesh Name : " + assImpMesh.Name+" - Material = "+assImpMesh.MaterialIndex);
            meshes.Add(mesh);
        }
        return meshes;
    }

    public GameObject LoadModel(string modelPath, UnityEngine.Material mat, bool shouldCalculateNormals,bool shouldCalculateTangents)
    {
        Scene assImpScene = ImportModel(modelPath);
        if (assImpScene == null || !assImpScene.HasMeshes) return null;

        var meshes = GetMeshes(assImpScene, shouldCalculateNormals, shouldCalculateTangents);
        var materials = GetMaterials(assImpScene);
        var matIndexes = GetMaterialIndexes(assImpScene);
        Debug.Log("Meshes Imported in Unity : " + meshes.Count);
        Debug.Log("Materials found : " + materials.Count);
        return ProcessNodes(assImpScene.RootNode, meshes, materials, matIndexes);
    }

    public GameObject ProcessNodes(Assimp.Node rootNode,List<UnityEngine.Mesh> meshesData,List<UnityEngine.Material> materials, List<int> matIndexes)
    {
        GameObject unityRoot = new GameObject(rootNode.Name);
        if (rootNode.HasChildren)
            foreach (Assimp.Node childNode in rootNode.Children)
            {
                GameObject unityChild = ProcessNodes(childNode,meshesData, materials, matIndexes);
                unityChild.transform.parent = unityRoot.transform;
            }

       // Debug.Log("Node Name : " + rootNode.Name);

        Assimp.Vector3D position, scaling;
        Assimp.Quaternion rotation;
        rootNode.Transform.Decompose(out scaling, out rotation, out position);
        unityRoot.transform.localPosition = new Vector3(position.X, position.Y, position.Z);
        unityRoot.transform.localRotation = new UnityEngine.Quaternion(rotation.X, rotation.Y, rotation.Z, rotation.W);
        unityRoot.transform.localScale = new Vector3(scaling.X, scaling.Y, scaling.Z);

        // Apply Mesh
        List<CombineInstance> combinedInstances = new List<CombineInstance>();
        bool containsMultipleMeshes = rootNode.MeshIndices.Count > 1; 
        foreach (var meshIndex in rootNode.MeshIndices)
        {
            var foundMesh = meshesData[meshIndex];
            //rootNode.MeshIndices
            //var foundMateriam = materials[meshIndex];
            if (foundMesh == null) continue;
            if (containsMultipleMeshes)// If per GO contains multiple meshes then go through each mesh and generate GO.
            {
                GameObject meshGO = new GameObject();
                meshGO.transform.parent = unityRoot.transform;
                AddMeshGO(foundMesh, meshGO, unityRoot.name, materials[matIndexes[meshIndex]]);
            }
            else
            {
                AddMeshGO(foundMesh, unityRoot, unityRoot.name, materials[matIndexes[meshIndex]]);
            }
        }

        return unityRoot;
    }

    GameObject AddMeshGO(UnityEngine.Mesh mesh,GameObject meshGO,string goName, UnityEngine.Material mat)
    {
        // Add mesh filter and renderer. 
       
        meshGO.AddComponent<MeshFilter>().mesh = mesh;
        meshGO.AddComponent<MeshRenderer>().sharedMaterial = mat;

        meshGO.name = goName;
        return meshGO;
    }

}
