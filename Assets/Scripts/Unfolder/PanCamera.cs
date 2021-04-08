using Unfolder;
using UnityEngine;

public class PanCamera : MonoBehaviour
{
    public Camera cameraBack;
    public Camera cameraFront;

    protected Vector2 localPan;

    public float MouseSensitivity = 4f;
    public float ScrollSensitvity = 1f;
    public float PanSensitvity = 140f;
    public float ScrollDampening = 10f;
    public float PanDampening = 100f;

    public float MinZoom = 1f;
    public float Zoom = 20f;
    public float MaxZoom = 100f;

    void LateUpdate()
    {
        if ((Input.GetMouseButton(0) || Input.GetMouseButton(1) || Input.GetMouseButton(2))
            && (Input.GetAxis("Mouse X") != 0 || Input.GetAxis("Mouse Y") != 0))
        {
            localPan.x -= Input.GetAxis("Mouse X") * PanSensitvity * Zoom / cameraBack.pixelWidth;
            localPan.y -= Input.GetAxis("Mouse Y") * PanSensitvity * Zoom / cameraBack.pixelHeight;
        }
        //Zooming Input from our Mouse Scroll Wheel
        if (Input.GetAxis("Mouse ScrollWheel") != 0f)
        {
            float ScrollAmount = Input.GetAxis("Mouse ScrollWheel") * ScrollSensitvity;
            ScrollAmount *= (this.Zoom * 0.3f);
            this.Zoom += ScrollAmount * -1f;
            this.Zoom = Mathf.Clamp(this.Zoom, MinZoom, MaxZoom);
        }

        float zoom = Mathf.Lerp(cameraBack.orthographicSize, this.Zoom, Time.deltaTime * ScrollDampening);
        float x = Mathf.Lerp(this.transform.localPosition.x, localPan.x, Time.deltaTime * PanDampening);
        float y = Mathf.Lerp(this.transform.localPosition.y, localPan.y, Time.deltaTime * PanDampening);
        this.transform.localPosition = new Vector3(x, y, this.transform.localPosition.z);
        cameraBack.orthographicSize = zoom;
        cameraFront.orthographicSize = zoom;
    }
}