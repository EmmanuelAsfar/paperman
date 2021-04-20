using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.Linq;

public class ModelPainter : MonoBehaviour
{
    public int currentMaterialIndex;
    public MeshFilter filter;

    // Start is called before the first frame update
    void Start()
    {
        filter = GetComponent<MeshFilter>();
    }

    // Update is called once per frame
    void Update()
    {
        if (Input.GetMouseButtonDown(0))
        {
            Ray ray = Camera.main.ScreenPointToRay(Input.mousePosition);

            if (Physics.Raycast(ray, out RaycastHit hit))
            {
                if (hit.transform != transform) return;
                Debug.Log(hit.transform.name + " - "+hit.triangleIndex);
                ChangeTriangleMaterial(hit.triangleIndex);
                //cube.transform.position = hit.point;
                //colorArray[hit.triangleIndex] = Color.red;
                //mesh.colors = colorArray;
            }
        }
    }

    private void AddMissingSubMeshes(int materialIndex)
    {
        Mesh m = filter.sharedMesh;
        if (materialIndex < m.subMeshCount) return;
        m.subMeshCount = materialIndex+1;
        for (int i = m.subMeshCount; i < materialIndex; i++)
        {
            m.SetTriangles(new int[] { }, i);
        }
    }

    private void ChangeTriangleMaterial(int triangleIndex)
    {
        Mesh m = filter.sharedMesh;
        int[] hittedTriangle = new int[]
        {
            m.triangles[triangleIndex * 3],
            m.triangles[triangleIndex * 3 + 1],
            m.triangles[triangleIndex * 3 + 2]
        };
        for (int i = 0; i < m.subMeshCount; i++)
        {
            int[] subMeshTris = m.GetTriangles(i);
            for (int j = 0; j < subMeshTris.Length; j += 3)
            {
                if (subMeshTris[j] == hittedTriangle[0] &&
                    subMeshTris[j + 1] == hittedTriangle[1] &&
                    subMeshTris[j + 2] == hittedTriangle[2])
                {
                    int subMeshId = i;
                    int triangleId = j;
                    Debug.Log(string.Format("triangle index:{0} submesh index:{1} submesh triangle index:{2}", triangleIndex, subMeshId, triangleId / 3));
                    if (subMeshId == currentMaterialIndex) return; // Pas besoin de changer la couleur c'est déjà la bonne
                    //var oldTris = subMeshTris.ToList();
                    //oldTris.RemoveRange(triangleId, 3);
                    //m.SetTriangles(oldTris, subMeshId);
                    AddMissingSubMeshes(currentMaterialIndex);
                    var newTris = m.GetTriangles(currentMaterialIndex).ToList();
                    newTris.Add(hittedTriangle[0]);
                    newTris.Add(hittedTriangle[1]);
                    newTris.Add(hittedTriangle[2]);
                    m.SetTriangles(newTris, currentMaterialIndex);
                    return;
                }
            }
        }
        // filter.sharedMesh.triangles;
    }
}
