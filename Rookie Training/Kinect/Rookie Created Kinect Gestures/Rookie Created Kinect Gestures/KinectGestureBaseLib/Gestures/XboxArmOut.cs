using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace KinectGestureBase.Gestures
{
    class XboxArmOut : Gesture
    {
        public XboxArmOut() { }
        public override bool isDoingGesture()
        {
            if (!(getDistanceX(HIP_RIGHT, HAND_RIGHT) > 0.25 && getDistanceX(HIP_RIGHT, HAND_RIGHT) < 0.3))
            {
                return false;
            }
            if (!(getDistanceX(HIP_LEFT, HAND_LEFT) < 0.2))
            {
                return false;
            }
            if (!(getDistanceY(HIP_RIGHT, HAND_RIGHT) < 0.2))
            {
                return false;
            }
            if (!(getDistanceZ(HIP_RIGHT, HAND_RIGHT) < 0.2))
            {
                return false;
            }
            return true;
        }
        protected override double getDelayTimeSeconds()
        {
            return 1.0;
        }
    }
}
