using System;
namespace Unfolder
{
    public class TaskProgress
    {
        public enum Status { Ok, Warning, Error }

        public float progressAmount;
        private String progressMessage;
        public Status taskStatus;
        private bool requestInterruption;
        private bool isComputing;
        private bool hasChanged;

        public String GetProgressMessage()
        {
            return Math.Round(progressAmount * 100) + "% " + (isComputing ? "(In progress)" : "") + " - " + progressMessage;
        }

        public void Error(String message, Exception ex = null)
        {
            UnityEngine.Debug.LogError(message + ex?.StackTrace);
            this.progressMessage = message;
            this.taskStatus = Status.Error;
            if (progressAmount == 0) progressAmount = 1;
            hasChanged = true;
        }

        public void Error(String message, float progressAmount, Exception ex = null)
        {
            Error(message, ex);
            this.progressAmount = progressAmount;
        }

        public void Warning(String message)
        {
            this.progressMessage = message;
            this.taskStatus = Status.Warning;
            hasChanged = true;
        }

        public void Warning(String message, float progressAmount)
        {
            Warning(message);
            this.progressAmount = progressAmount;
            if (progressAmount == 0) this.progressAmount = 1;
        }

        public void Ok(String message)
        {
            this.progressMessage = message;
            this.taskStatus = Status.Ok;
            hasChanged = true;
        }

        public void Ok(String message, float progressAmount)
        {
            Ok(message);
            this.progressAmount = progressAmount;
        }

        public void RequestInterruption()
        {
            if (!isComputing) return;
            requestInterruption = true;
            hasChanged = true;
        }

        public void NotifyStart()
        {
            isComputing = true;
            requestInterruption = false;
            hasChanged = true;
        }

        public void NotifyStop()
        {
            isComputing = false;
            requestInterruption = false;
            hasChanged = true;
        }

        public bool ShouldInterrupt()
        {
            return requestInterruption;
        }

        public bool IsComputing()
        {
            return isComputing;
        }
    }
}
