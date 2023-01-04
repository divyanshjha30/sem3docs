using System;
using System.Collections.Generic;
using System.Linq;
using System.Web;
using System.Web.UI;
using System.Web.UI.WebControls;

namespace _29september
{
    public partial class WebForm2 : System.Web.UI.Page
    {
        protected void Page_Load(object sender, EventArgs e)
        {

        }

        protected void findInterest(object sender, CommandEventArgs e)
        {
            String name = e.CommandName;
            if (name.Equals("Simple"))
            {
                double p, r, t, si;
                p = Double.Parse(TextBox1.Text);
                r = Double.Parse(TextBox2.Text);
                t = Double.Parse(TextBox3.Text);
                si = p * r * t / 100;
                Label5.Text = "Simple Interest is =" + si;
            }
            if (name.Equals("Compound"))
            {
                double p, r, t, ci;
                p = Double.Parse(TextBox1.Text);
                r = Double.Parse(TextBox2.Text);
                t = Double.Parse(TextBox3.Text);
                ci = ci = Math.Pow((1 + r / 100), t) * p - p;
                Label5.Text = "Compound Interest is =" + ci;
            }
        }

        protected void Button2_Click(object sender, EventArgs e)
        {

        }
    }
}