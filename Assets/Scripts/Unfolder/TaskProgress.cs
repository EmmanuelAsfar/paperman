using System;
namespace Unfolder
{
    public class TaskProgress
    {
        public enum Status { Ok, Warning, Error }

        public float progressAmount;
        public String progressMessage;
        public Status taskStatus;
        public bool requestInterruption;

        public String GetProgressMessage()
        {
            return (taskStatus == Status.Ok ? "" : ""+taskStatus+" - ") + progressMessage+ " - "+Math.Round(progressAmount*100)+"%";
        }
    }
}
