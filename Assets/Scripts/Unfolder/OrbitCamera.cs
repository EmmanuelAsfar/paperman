using UnityEngine;
using System.Collections;
using Unfolder;

public class OrbitCamera : MonoBehaviour
{
    public PapermanPlayer papermanPlayer;

    protected Camera myCamera;

    protected Vector3 _LocalRotation;
    protected Vector2 _LocalPan;

    public float OrbitSensitivity = 120f;
    public float ZoomSensitvity = 2f;
    public float ExplodeSensitvity = 10f;
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

    private bool ModifierPressed()
    {
        return Input.GetKey(KeyCode.RightAlt)
            || Input.GetKey(KeyCode.LeftAlt)
            || Input.GetKey(KeyCode.RightControl)
            || Input.GetKey(KeyCode.LeftControl)
            || Input.GetKey(KeyCode.AltGr)
            || Input.GetKey(KeyCode.Space)
            || Input.GetKey(KeyCode.LeftShift)
            || Input.GetKey(KeyCode.RightShift);
    }

    void LateUpdate()
    {
        if (!myCamera.enabled) return;
        bool modifier = ModifierPressed();
        bool button = Input.GetMouseButton(0);
        bool otherButton = Input.GetMouseButton(1) || Input.GetMouseButton(2);
        float mouseX = Input.GetAxis("Mouse X");
        float mouseY = Input.GetAxis("Mouse Y");
        float scroll = Input.GetAxis("Mouse ScrollWheel");

        //Rotation of the Camera based on Mouse Coordinates
        if (button && (mouseX != 0 || mouseY != 0))
        {
            _LocalRotation.x += mouseX * OrbitSensitivity * CameraDistance / myCamera.pixelWidth;
            _LocalRotation.y -= mouseY * OrbitSensitivity * CameraDistance / myCamera.pixelHeight;
        }
        if ((modifier || otherButton) && (mouseX != 0 || mouseY != 0))
        {
            _LocalPan.x -= mouseX * PanSensitvity * CameraDistance / myCamera.pixelWidth;
            _LocalPan.y -= mouseY * PanSensitvity * CameraDistance / myCamera.pixelHeight;
        }
        //Zooming Input from our Mouse Scroll Wheel
        if (scroll != 0f) {
            if (modifier && papermanPlayer.mode == ViewMode.Model3D) {
                papermanPlayer.mainPanel.ExplodeAmount.value += scroll * ExplodeSensitvity;
            }
            else {
                float ScrollAmount = scroll * ZoomSensitvity;
                ScrollAmount *= (this.CameraDistance * 0.3f);
                this.CameraDistance += ScrollAmount * -1f;
                this.CameraDistance = Mathf.Clamp(this.CameraDistance, MinDistance, MaxDistance);
            }
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