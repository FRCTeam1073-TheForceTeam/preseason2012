using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace KinectGestureBase.Gestures
{
    class ArmAboveHead : Gesture
    {
        public ArmAboveHead() { }
        public override bool isDoingGesture()
        {
            if (getDistanceY(HEAD, HAND_LEFT) > 0.15)
            {
                return true;
            }
            return false;
        }
        protected override double getDelayTimeSeconds()
        {
            return 1.2;
        }
        public override string getDescription()
        {
            return "The left arm is above the head";
        } 

    }
} 
