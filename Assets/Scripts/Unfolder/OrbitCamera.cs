using UnityEngine;
using System.Collections;

public class OrbitCamera : MonoBehaviour
{
    protected Camera myCamera;

    protected Vector3 _LocalRotation;
    protected Vector2 _LocalPan;

    public float OrbitSensitivity = 120f;
    public float ScrollSensitvity = 2f;
    public float PanSensitvity = 25f;
    public float OrbitDampening = 10f;
    public float ScrollDampening = 6f;
    public float PanDampening = 30f;

    public float MinDistance = 5f;
    public float CameraDistance = 150f;
    public float MaxDistance = 500f;

    // Use this for initialization
    void Start()
    {
        myCamera = GetComponent<Camera>();
        _LocalRotation = transform.parent.localRotation.eulerAngles;
    }


    void LateUpdate()
    {
        if (!myCamera.enabled) return;
        //Rotation of the Camera based on Mouse Coordinates
        if (Input.GetMouseButton(0) && (Input.GetAxis("Mouse X") != 0 || Input.GetAxis("Mouse Y") != 0))
        {
            _LocalRotation.x += Input.GetAxis("Mouse X") * OrbitSensitivity * CameraDistance / myCamera.pixelWidth;
            _LocalRotation.y -= Input.GetAxis("Mouse Y") * OrbitSensitivity * CameraDistance / myCamera.pixelHeight;
        }
        if ((Input.GetMouseButton(1) || Input.GetMouseButton(2)) && (Input.GetAxis("Mouse X") != 0 || Input.GetAxis("Mouse Y") != 0))
        {
            _LocalPan.x -= Input.GetAxis("Mouse X") * PanSensitvity * CameraDistance / myCamera.pixelWidth;
            _LocalPan.y -= Input.GetAxis("Mouse Y") * PanSensitvity * CameraDistance / myCamera.pixelHeight;
        }
        //Zooming Input from our Mouse Scroll Wheel
        if (Input.GetAxis("Mouse ScrollWheel") != 0f)
        {
            float ScrollAmount = Input.GetAxis("Mouse ScrollWheel") * ScrollSensitvity;
            ScrollAmount *= (this.CameraDistance * 0.3f);
            this.CameraDistance += ScrollAmount * -1f;
            this.CameraDistance = Mathf.Clamp(this.CameraDistance, MinDistance, MaxDistance);
        }

        //Actual Camera Rig Transformations
        Quaternion QT = Quaternion.Euler(_LocalRotation.y, _LocalRotation.x, 0);
        this.transform.parent.rotation = Quaternion.Lerp(this.transform.parent.rotation, QT, Time.deltaTime * OrbitDampening);

        float z = Mathf.Lerp(this.transform.localPosition.z, this.CameraDistance * -1f, Time.deltaTime * ScrollDampening);
        float x = Mathf.Lerp(this.transform.localPosition.x, _LocalPan.x, Time.deltaTime * PanDampening);
        float y = Mathf.Lerp(this.transform.localPosition.y, _LocalPan.y, Time.deltaTime * PanDampening);
        this.transform.localPosition = new Vector3(x, y, z);
    }
}