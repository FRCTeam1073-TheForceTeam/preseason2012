using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Windows.Forms;
using KinectGestureBase.Examples;
namespace Rookie_Created_Kinect_Gestures.KinectGestureBaseLib.Examples
{
    class Program
    {
        [STAThread]
        static void Main()
        {
            Application.EnableVisualStyles();
            Application.SetCompatibleTextRenderingDefault(false);
            Application.Run(new ExampleForm());
        }
    }
}
