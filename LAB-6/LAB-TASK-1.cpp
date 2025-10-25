using System;
using System.Drawing;
using System.Windows.Forms;

namespace WindowsFormsApp
{
    public class ColorForm : Form
    {
        private Button redButton;
        private Button greenButton;
        private Button blueButton;
        private Button yellowButton;

        public ColorForm()
        {
            // Set form properties
            this.Text = "Color Changer";
            this.Size = new Size(400, 200);

            // Create red button
            redButton = new Button();
            redButton.Text = "красный";
            redButton.Location = new Point(50, 50);
            redButton.Click += new EventHandler(RedButton_Click);
            this.Controls.Add(redButton);

            // Create green button
            greenButton = new Button();
            greenButton.Text = "зеленый";
            greenButton.Location = new Point(150, 50);
            greenButton.Click += new EventHandler(GreenButton_Click);
            this.Controls.Add(greenButton);

            // Create blue button
            blueButton = new Button();
            blueButton.Text = "синий";
            blueButton.Location = new Point(250, 50);
            blueButton.Click += new EventHandler(BlueButton_Click);
            this.Controls.Add(blueButton);

            // Create yellow button
            yellowButton = new Button();
            yellowButton.Text = "желтый";
            yellowButton.Location = new Point(50, 100);
            yellowButton.Click += new EventHandler(YellowButton_Click);
            this.Controls.Add(yellowButton);
        }

        // Handler for red button
        private void RedButton_Click(object sender, EventArgs e)
        {
            this.BackColor = Color.Red;
        }

        // Handler for green button
        private void GreenButton_Click(object sender, EventArgs e)
        {
            this.BackColor = Color.Green;
        }

        // Handler for blue button
        private void BlueButton_Click(object sender, EventArgs e)
        {
            this.BackColor = Color.Blue;
        }

        // Handler for yellow button
        private void YellowButton_Click(object sender, EventArgs e)
        {
            this.BackColor = Color.Yellow;
        }

        [STAThread]
        static void Main()
        {
            Application.EnableVisualStyles();
            Application.SetCompatibleTextRenderingDefault(false);
            Application.Run(new ColorForm());
        }
    }
}
