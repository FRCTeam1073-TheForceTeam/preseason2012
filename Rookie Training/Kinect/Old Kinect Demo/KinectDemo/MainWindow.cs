using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Windows.Forms;
using Coding4Fun.Kinect.Common;
using Coding4Fun.Kinect.WinForm;
using Microsoft.Research.Kinect.Nui;
namespace KinectDemo
{
    public partial class MainWindow : Form
    {
        private VideoForm video;
        private Runtime nui;    //kinect Runtime variable. Let's us pull data from the hardware live
        private DateTime starDelay = new DateTime();
        public MainWindow()
        {
            nui = new Runtime();
            try { nui.Initialize(RuntimeOptions.UseSkeletalTracking | RuntimeOptions.UseColor); }
            catch (InvalidOperationException) { return; }
            nui.SkeletonFrameReady += new EventHandler<SkeletonFrameReadyEventArgs>(nui_SkeletonFrameReady);
            try { nui.VideoStream.Open(ImageStreamType.Video, 2, ImageResolution.Resolution640x480, ImageType.Color); }
            catch (InvalidOperationException) { return; }
            nui.VideoFrameReady += new EventHandler<ImageFrameReadyEventArgs>(nui_ColorFrameReady);
            InitializeComponent();
            video = new VideoForm();
            video.Show();
            starDelay = DateTime.Now;
        }
        void nui_SkeletonFrameReady(object sender, SkeletonFrameReadyEventArgs e)
        {
            foreach (SkeletonData data in e.SkeletonFrame.Skeletons)
            {
             
                if (star(data)) MessageBox.Show("Star!");
            }
        }

        void nui_ColorFrameReady(object sender, ImageFrameReadyEventArgs e)
        {
            PlanarImage image = e.ImageFrame.Image;
            ImageFrame i = e.ImageFrame;
            Bitmap bitmap = i.ToBitmap();
            String info = "Frame Number:\t" + i.FrameNumber.ToString() + "\nResoulution\t" + i.Resolution.ToString() + "\nTime Stamp\t" + i.Timestamp.ToString();
            video.refresh(info, bitmap);
        }
        bool HandsAboveHead(SkeletonData data)
        {
            float head_location = data.Joints[JointID.Head].Position.Y;
            float left_hand = data.Joints[JointID.HandLeft].Position.Y;
            float right_hand = data.Joints[JointID.HandRight].Position.Y;

            const float THRESHOLD = 0.22f;  //about 9 inches in SI

            bool test = false;

            if (left_hand > head_location + THRESHOLD && right_hand + THRESHOLD > head_location)
            {
                test = true;
            }
            return test;
        }
        bool far_apartX(Joint one, Joint two, float threshold)
        {
            bool output = false;
            float distance = Math.Abs(one.Position.X - two.Position.X);
           
            if (distance > threshold) output = true;
            MessageBox.Show(" output is " + output);
            return output;
        }
        bool handsTouchingAboveHead(SkeletonData data)
        {
            //TODO write this gesture 
            return false;
        }
        bool star(SkeletonData data)
        {
            if (far_apartX(data.Joints[JointID.AnkleLeft], data.Joints[JointID.AnkleRight], 0.5f))
            {
                if (far_apartX(data.Joints[JointID.HandLeft], data.Joints[JointID.HandRight], 0.66f))
                {
                    if (HandsAboveHead(data)) return true;
                }
            }
            return false;
        }
        private void MainWindow_Load(object sender, System.EventArgs e)
        {

        }
    }
}
