using System;
using System.Collections.Generic;
using System.Linq;
using System.Web;
using System.Web.UI;
using System.Web.UI.WebControls;

namespace WebApplication2
{
    public partial class WebForm1 : System.Web.UI.Page
    {
        protected void Page_Load(object sender, EventArgs e)
        {

        }

        protected void CheckBoxList1_SelectedIndexChanged(object sender, EventArgs e)
        {
            string str = "";
            foreach(ListItem li in CheckBoxList1.Items)
            {
                if (li.Selected)
                {
                    str = str + li.Text + " ";
                }
            }
            Label1.Text = "Yout hobbies are " + str;
        }
    }
}