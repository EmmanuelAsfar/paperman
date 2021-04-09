using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MoveRotate : MonoBehaviour
{
    private Camera backCamera;
    private Vector2 localMove;
    private Color startcolor;
    private Renderer myRenderer;

    public Color highlightColor = Color.yellow;
    public Color collisionColor = Color.red;

    // Start is called before the first frame update
    void Start()
    {
        myRenderer = GetComponent<MeshRenderer>();
        localMove = this.transform.localPosition;
        backCamera = GameObject.Find("Camera2DBack").GetComponent<Camera>();

        foreach (var material in myRenderer.materials)
            if (material.name == "BackMaterial (Instance)") startcolor = material.color;
    }

    private void ApplyColor(Color color)
    {
        foreach (var material in myRenderer.materials)
            if (material.name == "BackMaterial (Instance)") material.color = color;
    } 

    void OnMouseEnter()
    {
        ApplyColor(highlightColor);
    }

    void OnTriggerStay2D(Collider2D other)
    {
        ApplyColor(collisionColor);
    }

    void OnTriggerExit2D(Collider2D other)
    {
        ApplyColor(startcolor);
    }

    void OnMouseExit()
    {
        ApplyColor(startcolor);
    }

    private void OnMouseDrag()
    {
        if (backCamera.enabled == false) return;
        localMove.x += 100 * Input.GetAxis("Mouse X") * backCamera.orthographicSize / backCamera.pixelWidth;
        localMove.y += 100 * Input.GetAxis("Mouse Y") * backCamera.orthographicSize / backCamera.pixelHeight;
        this.transform.localPosition = (Vector3)(localMove);
    }
}
