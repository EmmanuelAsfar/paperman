using System.Collections;
using System.Collections.Generic;
using Unfolder;
using UnityEngine;

public class MoveRotate : MonoBehaviour
{
    private Camera backCamera;
    private Camera frontCamera;
    private Vector2 localMove;
    private Vector2 oldMousePosition;
    private Renderer myRenderer;
    private Vector2 center;
    private Transform shape;

    public Color highlightColor = Color.yellow;
    public Color collisionColor = Color.red;

    public enum GizmoType { Selected, Colliding, Unselected }

    [Range(0, 100)]
    public float rotationSensitivity = 16f;

    public bool selectable;
    public bool selected;
    public bool colliding;

    // Start is called before the first frame update
    void Start()
    {
        shape = transform.parent;
        myRenderer = GetComponent<MeshRenderer>();
        localMove = shape.localPosition;
        backCamera = GameObject.Find("Camera2DBack").GetComponent<Camera>();
        frontCamera = GameObject.Find("Camera2DFront").GetComponent<Camera>();
    }

    private void ApplyColor(GizmoType type)
    {
        myRenderer.enabled = type != GizmoType.Unselected;
        myRenderer.material.color = type == GizmoType.Colliding ? collisionColor : highlightColor;
    }

    private void Update()
    {
        if (!backCamera.enabled && !frontCamera.enabled) return;
        center = UnityUtil.GetMaxBounds(gameObject).center;
        Camera activeCamera = backCamera.enabled ? backCamera : frontCamera;
        Vector2 newMousePosition = activeCamera.ScreenToWorldPoint(Input.mousePosition);
        if (selected && Input.GetMouseButton(1))
        {
            Vector2 delta = newMousePosition - oldMousePosition;
            float rotationDelta = delta.x * rotationSensitivity;
            shape.RotateAround(center, Vector3.forward, rotationDelta);
            localMove = shape.localPosition;
        }
        if (selected && Input.GetMouseButton(0))
        {
            localMove += newMousePosition - oldMousePosition;
            shape.localPosition = (Vector3)(localMove);
        }
        if (!Input.GetMouseButton(1) && !Input.GetMouseButton(0) && !selectable) selected = false;
        oldMousePosition = newMousePosition;

        if (colliding) ApplyColor(GizmoType.Colliding);
        else if (selected) ApplyColor(GizmoType.Selected);
        else ApplyColor(GizmoType.Unselected);
    }

    void OnMouseEnter()
    {
        if (!backCamera.enabled && !frontCamera.enabled) return;
        if (Input.GetMouseButton(1) || Input.GetMouseButton(0)) return;
        selectable = true;
        selected = true;
    }

    void OnTriggerStay2D(Collider2D other)
    {
        colliding = true;
    }

    void OnTriggerExit2D(Collider2D other)
    {
        colliding = false;
    }

    void OnMouseExit()
    {
        selectable = false;
    }
}
