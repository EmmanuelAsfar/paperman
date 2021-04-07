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

        public String GetProgressMessage()
        {
            return Math.Round(progressAmount * 100) + "% " + (isComputing ? "(In progress)" : "") + " - " + progressMessage;
        }

        public void Error(String message)
        {
            this.progressMessage = message;
            this.taskStatus = Status.Error;
        }

        public void Error(String message, float progressAmount)
        {
            Error(message);
            this.progressAmount = progressAmount;
        }

        public void Warning(String message)
        {
            this.progressMessage = message;
            this.taskStatus = Status.Warning;
        }

        public void Warning(String message, float progressAmount)
        {
            Warning(message);
            this.progressAmount = progressAmount;
        }

        public void Ok(String message)
        {
            this.progressMessage = message;
            this.taskStatus = Status.Ok;
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
        }

        public void NotifyStart()
        {
            isComputing = true;
            requestInterruption = false;
        }

        public void NotifyStop()
        {
            isComputing = false;
            requestInterruption = false;
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
