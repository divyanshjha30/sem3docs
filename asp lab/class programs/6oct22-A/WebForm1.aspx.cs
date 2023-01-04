using System;
using System.Collections.Generic;
using System.Linq;
using System.Web;
using System.Web.UI;
using System.Web.UI.WebControls;

namespace _6oct22_A
{
    public partial class WebForm1 : System.Web.UI.Page
    {
        protected void Page_Load(object sender, EventArgs e)
        {
            DropDownList1.Items[0].Attributes["disabled"] = "disabled";
        }

        protected void DropDownList1_SelectedIndexChanged(object sender, EventArgs e)
        {
            String str = DropDownList1.SelectedItem.Text;
            Label1.Text = "You have selected " + str;
        }
    }
}