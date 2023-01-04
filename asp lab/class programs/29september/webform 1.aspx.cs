using System;
using System.Collections.Generic;
using System.Linq;
using System.Web;
using System.Web.UI;
using System.Web.UI.WebControls;

namespace _29september
{
    public partial class webform_1 : System.Web.UI.Page
    {
        protected void Page_Load(object sender, EventArgs e)
        {

        }

        protected void Button1_Click(object sender, EventArgs e)
        {
            double p, r, t, si;
            p = Double.Parse(TextBox1.Text);
            r = Double.Parse(TextBox2.Text);
            t = Double.Parse(TextBox3.Text);
            si = p * r * t / 100;
            Label5.Text = "Simple Interest is =" + si;
        }

        protected void Button2_Click(object sender, EventArgs e)
        {
            double p, r, t, ci;
            p = Double.Parse(TextBox1.Text);
            r = Double.Parse(TextBox2.Text);
            t = Double.Parse(TextBox3.Text);
            ci = Math.Pow((1 + r / 100), t)*p-p;
            Label5.Text = "Compound Interest is =" + ci;
        }

        protected void FindInterest(object sender, CommandEventArgs e)
        {
            String str = e.CommandName;
            if (str.Equals("Simple"))
            {
                
            }

            if (str.Equals("Compound"))
            {

            }
        }
    }
}