using UnityEngine;
using System.Collections;

public class PanCamera : MonoBehaviour
{

    protected Transform _XForm_Camera;
    protected Camera myCamera;

    protected Vector2 _LocalPan;

    public float MouseSensitivity = 4f;
    public float ScrollSensitvity = 0.5f;
    public float PanSensitvity = 30f;
    public float ScrollDampening = 10f;
    public float PanDampening = 100f;

    public float MinZoom = 2f;
    public float Zoom = 10.5f;
    public float MaxZoom = 100f;

    public bool panDisabled = true;


    // Use this for initialization
    void Start()
    {
        this._XForm_Camera = this.transform;
        this.myCamera = GetComponent<Camera>();
    }


    void LateUpdate()
    {
        if (!myCamera.enabled) return;
        if ((Input.GetMouseButton(0) || Input.GetMouseButton(1) || Input.GetMouseButton(2))
            && (Input.GetAxis("Mouse X") != 0 || Input.GetAxis("Mouse Y") != 0))
        {
            _LocalPan.x -= Input.GetAxis("Mouse X") * PanSensitvity * Zoom / myCamera.pixelWidth;
            _LocalPan.y -= Input.GetAxis("Mouse Y") * PanSensitvity * Zoom / myCamera.pixelHeight;
        }
        //Zooming Input from our Mouse Scroll Wheel
        if (Input.GetAxis("Mouse ScrollWheel") != 0f)
        {
            float ScrollAmount = Input.GetAxis("Mouse ScrollWheel") * ScrollSensitvity;
            ScrollAmount *= (this.Zoom * 0.3f);
            this.Zoom += ScrollAmount * -1f;
            this.Zoom = Mathf.Clamp(this.Zoom, MinZoom, MaxZoom);
        }

        float zoom = Mathf.Lerp(myCamera.orthographicSize, this.Zoom, Time.deltaTime * ScrollDampening);
        float x = Mathf.Lerp(this._XForm_Camera.localPosition.x, _LocalPan.x, Time.deltaTime * PanDampening);
        float y = Mathf.Lerp(this._XForm_Camera.localPosition.y, _LocalPan.y, Time.deltaTime * PanDampening);
        this._XForm_Camera.localPosition = new Vector3(x, y, this._XForm_Camera.localPosition.z);
        myCamera.orthographicSize = zoom;

        if (Input.GetMouseButtonDown(0))
            panDisabled = false;

        if (Input.GetMouseButtonUp(0))
            panDisabled = true;
    }
}