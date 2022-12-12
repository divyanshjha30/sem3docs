using System;
using System.Collections.Generic;
using System.Linq;
using System.Web;
using System.Web.UI;
using System.Web.UI.WebControls;

namespace _6oct2022
{
    public partial class WebForm1 : System.Web.UI.Page
    {
        protected void Page_Load(object sender, EventArgs e)
        {

        }

        protected void BulletedList1_Click(object sender, BulletedListEventArgs e)
        {
            String str = "";
            int counter = 0;
            foreach(ListItem li in BulletedList1.Items)
            {
                counter++;
            }
            str = "Total Number of Courses are " + counter;
            Label1.Text = str;
        }
    }
}