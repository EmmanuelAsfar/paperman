using System;
using System.Collections.Generic;
using System.IO;
using System.IO.Compression;
using System.Linq;
using SFB;
using UnityEngine;

namespace Unfolder
{
    public class UnityUtil
    {
        public static void ReducePoly(GameObject go, float factor, float smoothAngle)
        {
            var meshSimplifier = new UnityMeshSimplifier.MeshSimplifier();
            meshSimplifier.Initialize(go.gameObject.GetComponent<MeshFilter>().mesh);
            meshSimplifier.SimplifyMesh(factor);
            var destMesh = meshSimplifier.ToMesh();
            destMesh.RecalculateNormals(smoothAngle);
            go.GetComponent<MeshFilter>().mesh = destMesh;
        }

        public static Bounds GetMaxBounds(GameObject g)
        {
            var b = new Bounds(g.transform.position, Vector3.zero);
            foreach (Renderer r in g.GetComponentsInChildren<Renderer>(true))
            {
                b.Encapsulate(r.bounds);
            }
            return b;
        }

        public static void ApplySwatch(GameObject go, Color[] swatchColors)
        {
            foreach (var renderer in go.GetComponentsInChildren<MeshRenderer>(true))
            {
                int i = 0;
                foreach (var material in renderer.materials)
                {
                    material.color = swatchColors[i % swatchColors.Length];
                    i++;
                }
            }
        }

        public static void ApplyOutline(GameObject object3D)
        {
            var outlineShader = Resources.Load("Shader/StandardSurfaceOutlined", typeof(Shader)) as Shader;

            foreach (var renderer in object3D.GetComponentsInChildren<MeshRenderer>(true))
            {
                foreach (var material in renderer.materials)
                {
                    material.shader = outlineShader;
                }
            }
        }

        public static void Merge(GameObject object3D)
        {
            // All our children (and us)
            MeshFilter[] filters = object3D.GetComponentsInChildren<MeshFilter>(true);

            // All the meshes in our children (just a big list)
            List<Material> materials = new List<Material>();
            MeshRenderer[] renderers = object3D.GetComponentsInChildren<MeshRenderer>(true); // <-- you can optimize this
            foreach (MeshRenderer renderer in renderers)
                foreach (Material localMat in renderer.sharedMaterials)
                    if (!materials.Contains(localMat)) materials.Add(localMat);
            // Each material will have a mesh for it.
            List<Mesh> submeshes = new List<Mesh>();
            foreach (Material material in materials)
            {
                // Make a combiner for each (sub)mesh that is mapped to the right material.
                List<CombineInstance> combiners = new List<CombineInstance>();
                foreach (MeshFilter filter in filters)
                {
                    MeshRenderer renderer = filter.GetComponent<MeshRenderer>();  // <-- (Easy optimization is possible here, give it a try!)
                    if (renderer == null)
                    {
                        Debug.LogError(filter.name + " has no MeshRenderer");
                        continue;
                    }

                    // Let's see if their materials are the one we want right now.
                    Material[] localMaterials = renderer.sharedMaterials;
                    for (int materialIndex = 0; materialIndex < localMaterials.Length; materialIndex++)
                    {
                        if (localMaterials[materialIndex] != material)
                            continue;
                        // This submesh is the material we're looking for right now.
                        CombineInstance ci = new CombineInstance
                        {
                            mesh = filter.sharedMesh,
                            subMeshIndex = materialIndex,
                            transform = Matrix4x4.identity//filter.transform.localToWorldMatrix * object3D.transform.worldToLocalMatrix
                        };
                        combiners.Add(ci);
                    }
                }
                // Flatten into a single mesh.
                Mesh mesh = new Mesh();
                mesh.indexFormat = UnityEngine.Rendering.IndexFormat.UInt32;
                mesh.CombineMeshes(combiners.ToArray(), true);
                submeshes.Add(mesh);
            }

            // The final mesh: combine all the material-specific meshes as independent submeshes.
            List<CombineInstance> finalCombiners = new List<CombineInstance>();
            foreach (Mesh mesh in submeshes)
            {
                CombineInstance ci = new CombineInstance();
                ci.mesh = mesh;
                ci.subMeshIndex = 0;
                ci.transform = Matrix4x4.identity;
                finalCombiners.Add(ci);
            }
            Mesh finalMesh = new Mesh();
            finalMesh.indexFormat = UnityEngine.Rendering.IndexFormat.UInt32;
            finalMesh.CombineMeshes(finalCombiners.ToArray(), false);

            var mf2 = object3D.GetComponent<MeshFilter>();
            var mr2 = object3D.GetComponent<MeshRenderer>();

            if (mf2 == null) mf2 = object3D.AddComponent<MeshFilter>();
            if (mr2 == null) mr2 = object3D.AddComponent<MeshRenderer>();

            mf2.sharedMesh = finalMesh;
            mr2.sharedMaterials = materials.ToArray();
            Debug.Log("Final mesh has " + submeshes.Count + " materials.");

            foreach (Transform child in object3D.transform)
                GameObject.Destroy(child.gameObject);
        }

        public static Mesh SplitTriangles(Mesh mesh)
        {
            int total = 0;
            for (int subMeshId = 0; subMeshId < mesh.subMeshCount; subMeshId++)
                total += mesh.GetTriangles(subMeshId).Length;
            if (total > 1E4)
            {
                Debug.Log("No triangle split because mesh to big");
                return mesh;
            }
            Mesh result = new Mesh();
            var allTriangles = new List<int[]>();
            var vertices = new Vector3[total];
            var uvs = new Vector2[total];
            result.subMeshCount = mesh.subMeshCount;
            
            int i = 0;
            for (int subMeshId = 0; subMeshId < mesh.subMeshCount; subMeshId++)
            {
                var triangles = new int[mesh.GetTriangles(subMeshId).Length];
                int j = 0;
                foreach (int t in mesh.GetTriangles(subMeshId))
                {
                    Vector3 vertice = mesh.vertices[t];
                    Vector2 verticeUV = mesh.uv.Length <= t ? Vector2.zero : mesh.uv[t];
                    triangles[j] = i;
                    vertices[i] = vertice;
                    uvs[i] = verticeUV;
                    i++;
                    j++;
                }
                allTriangles.Add(triangles);
            }
            result.SetVertices(vertices);
            result.uv = uvs;
            for (int subMeshId = 0; subMeshId < mesh.subMeshCount; subMeshId++)
            {
                result.SetTriangles(allTriangles[subMeshId], subMeshId);
            }
            result.RecalculateNormals(0);
            result.Optimize();
            return result;
        }

        public static void SplitTriangles(GameObject go)
        {
            foreach (var mf in go.GetComponentsInChildren<MeshFilter>())
                mf.sharedMesh = SplitTriangles(mf.mesh);
        }

        public static int CountFaces(GameObject current3DModel)
        {
            int count = 0;
            foreach (var filter in  current3DModel.GetComponentsInChildren<MeshFilter>(true))
            {
                if (filter == null || filter.sharedMesh == null) continue;
                count += filter.sharedMesh.triangles.Length / 3;
            }
            return count;
        }

        public static String ChooseExportPath(String dirPath, String name)
        {
            SFB.ExtensionFilter sfbFilter = new SFB.ExtensionFilter("Zip file", new string[] { "zip" });
            string filePath = StandaloneFileBrowser.SaveFilePanel("Choose artcraft file name", dirPath, name, new SFB.ExtensionFilter[] { sfbFilter });
            if (filePath.Length == 0) return null;
            return filePath;
        }

        public static string ChooseFile(String dirPath)
        {
            SFB.ExtensionFilter sfbFilter = new SFB.ExtensionFilter("3D Models", new string[] { "fbx", "obj", "dae", "stl", "blend" });
            string[] files = StandaloneFileBrowser.OpenFilePanel("Load 3D Model", dirPath, new SFB.ExtensionFilter[] { sfbFilter }, false);
            if (files.Length == 0 || files[0].Length == 0) return null;
            return files[0];

            //String filePath = null;
            //filePath = FileBrowser.OpenSingleFile("Load 3D model", ".", new ExtensionFilter[] { filter });
            //ExtensionFilter filter = new ExtensionFilter("3D Models", new string[] { "fbx", "obj", "dae", "stl", "blend" });
            //NativeFilePicker.PickFile(path => { filePath = path; }, new string[] { "fbx", "obj", "dae", "stl", "blend" });
            //Debug.Log("Picker passed");
            //WebUtility.UrlDecode(filePath);
            //Debug.Log("Loading file : "+filePath);
            //filePath = WebUtility.UrlDecode(filePath);
            //Debug.Log("Loading file (decoded) : " + filePath);
            //if (filePath == null) return null;
            //return LoadModel(filePath);
        }

        public static List<Color> GetSwatch(GameObject go)
        {
            var swatch = new List<Color>();
            foreach (var renderer in go.GetComponentsInChildren<MeshRenderer>(true))
            {
                int i = 0;
                foreach (var material in renderer.materials)
                {
                    swatch.Add(material.color);
                    i++;
                }
            }
            return swatch;
        }

        public static void ZipFiles(String dirPath, String filePath)
        {
            if (File.Exists(filePath)) File.Delete(filePath);
            ZipFile.CreateFromDirectory(dirPath, filePath);
        }
    }
}
