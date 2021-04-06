using UnityEngine;
using System.Collections;

public class OrbitCamera : MonoBehaviour
{

    protected Transform _XForm_Camera;
    protected Transform _XForm_Parent;
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

    public bool orbitDisabled = true;
    public bool panDisabled = true;


    // Use this for initialization
    void Start()
    {
        myCamera = GetComponent<Camera>();
        this._XForm_Camera = this.transform;
        this._XForm_Parent = this.transform.parent;
    }


    void LateUpdate()
    {
        if (!myCamera.enabled) return;
        //Rotation of the Camera based on Mouse Coordinates
        if (Input.GetMouseButton(0) && (Input.GetAxis("Mouse X") != 0 || Input.GetAxis("Mouse Y") != 0))
        {
            _LocalRotation.x += Input.GetAxis("Mouse X") * OrbitSensitivity * CameraDistance / myCamera.pixelWidth;
            _LocalRotation.y -= Input.GetAxis("Mouse Y") * OrbitSensitivity * CameraDistance / myCamera.pixelHeight;
            //Clamp the y Rotation to horizon and not flipping over at the top
            //if (_LocalRotation.y < -90f)
            //    _LocalRotation.y = -90f;
            //else if (_LocalRotation.y > 90f)
            //    _LocalRotation.y = 90f;
        }
        if ((Input.GetMouseButton(1) || Input.GetMouseButton(2)) && (Input.GetAxis("Mouse X") != 0 || Input.GetAxis("Mouse Y") != 0))
        {
            _LocalPan.x -= Input.GetAxis("Mouse X") * PanSensitvity * CameraDistance / myCamera.pixelWidth;
            _LocalPan.y -= Input.GetAxis("Mouse Y") * PanSensitvity * CameraDistance / myCamera.pixelHeight;
            //Clamp the y Rotation to horizon and not flipping over at the top
            //if (_LocalRotation.y < -90f)
            //    _LocalRotation.y = -90f;
            //else if (_LocalRotation.y > 90f)
            //    _LocalRotation.y = 90f;
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
        this._XForm_Parent.rotation = Quaternion.Lerp(this._XForm_Parent.rotation, QT, Time.deltaTime * OrbitDampening);

        float z = Mathf.Lerp(this._XForm_Camera.localPosition.z, this.CameraDistance * -1f, Time.deltaTime * ScrollDampening);
        float x = Mathf.Lerp(this._XForm_Camera.localPosition.x, _LocalPan.x, Time.deltaTime * PanDampening);
        float y = Mathf.Lerp(this._XForm_Camera.localPosition.y, _LocalPan.y, Time.deltaTime * PanDampening);
        this._XForm_Camera.localPosition = new Vector3(x, y, z);

        if (Input.GetMouseButtonDown(0))
            orbitDisabled = false;
        if (Input.GetMouseButtonDown(2))
            panDisabled = false;
        if (Input.GetMouseButtonUp(0))
            orbitDisabled = true;
        if (Input.GetMouseButtonUp(2))
            panDisabled = true;
    }
}