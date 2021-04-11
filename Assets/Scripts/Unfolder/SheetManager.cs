using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SheetManager : MonoBehaviour
{
    private Dictionary<TextMesh, Vector3> scales;
    private Vector3 scale;
    public TextMesh logo;
    public GameObject activeZone;
    public Vector3 sheetMargin;
    public bool logoActive = true;

    // Start is called before the first frame update
    void Start()
    {
        var textShader = Resources.Load("Shader/OneSideTextShader", typeof(Shader)) as Shader;

        scales = new Dictionary<TextMesh, Vector3>();
        foreach (var textMesh in GetComponentsInChildren<TextMesh>(true))
        {
            textMesh.GetComponent<MeshRenderer>().material.shader = textShader;
            scales.Add(textMesh, textMesh.transform.localScale);
            scale =  transform.localScale;
        }
    }

    // Update is called once per frame
    void Update()
    {
        if (scales == null) Start();
        float ratio = transform.localScale.y * scale.x / (transform.localScale.x * scale.y);
        foreach (var textMesh in scales.Keys)
        {
            textMesh.transform.localScale = new Vector3(
                scales[textMesh].x * Math.Min(1, ratio),
                scales[textMesh].y * Math.Min(1, 1 / ratio),
                1);
        }
        logo.gameObject.SetActive(logoActive);
        activeZone.transform.localScale = new Vector3(1 - 2 * sheetMargin.x / transform.localScale.x, 1 - 2 * sheetMargin.y / transform.localScale.y, 1);
    }
}
