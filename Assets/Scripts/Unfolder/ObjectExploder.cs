using System.Collections;
using System.Collections.Generic;
using Unfolder;
using UnityEngine;

namespace Unfolder {
    public class ObjectExploder : MonoBehaviour
    {
        [Range(0, 10)]
        public float explodeAmount = 0;
        public float dampening = 4;
        public Vector3 center;
        private Dictionary<Transform, Vector3> explodeVectors;
        private Dictionary<Transform, Vector3> initPositions;
        // Start is called before the first frame update
        void Start()
        {
            center = UnityUtil.GetMaxBounds(gameObject).center;
            explodeVectors = new Dictionary<Transform, Vector3>();
            initPositions = new Dictionary<Transform, Vector3>();
            foreach (Transform child in transform)
            {
                explodeVectors[child] = UnityUtil.GetMaxBounds(child.gameObject).center - center;
                initPositions[child] = child.position;
            }
        }

        // Update is called once per frame
        void Update()
        {
            if (initPositions == null) Start();
            foreach (Transform child in transform) {
                //if (child == null) continue;
                child.position = Vector3.Lerp(child.position, initPositions[child] + explodeVectors[child] * explodeAmount, Time.deltaTime * dampening);
            }
        }

        public void SetImmediateExplode(float explodeAmount)
        {
            this.explodeAmount = explodeAmount;
            foreach (Transform child in transform)
                child.position = initPositions[child] + explodeVectors[child] * explodeAmount;
        }
    }
}