using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Windows.Forms;

namespace KinectDemo
{
    public partial class VideoForm : Form
    {
        const int LENGTH = 640;
        const int WIDTH = 480;
        public VideoForm()
        {
            InitializeComponent();
        }

        private void pictureBox_Click(object sender, EventArgs e)
        {
            this.Size = new Size(LENGTH, WIDTH);
        }
        public void refresh(String title, Bitmap image)
        {
            this.Text = title;
            pictureBox.Image = image;
        }
    }
}
