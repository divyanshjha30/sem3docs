using System;
using System.Collections.Generic;
using System.Linq;
using System.Web;
using System.Web.UI;
using System.Web.UI.WebControls;
using System.Data;
using System.Data.SqlClient;

namespace _20oct2022
{
    public partial class WebForm1 : System.Web.UI.Page
    {
        SqlConnection con;
        SqlCommand cmd;
        protected void Page_Load(object sender, EventArgs e)
        {
            con = new SqlConnection(@"Data Source=(LocalDB)\MSSQLLocalDB;AttachDbFilename=C:\Users\divya\Documents\d1.mdf;Integrated Security=True;Connect Timeout=30");
            con.Open();
        }

        protected void Button1_Click(object sender, EventArgs e)
        {
            String s_id = TextBox1.Text;
            String sname = TextBox2.Text;
            String marks = TextBox3.Text;
            String str = "insert into student values(" + s_id + ",'" + sname + "'," + marks + ")";
            cmd = new SqlCommand(str, con);
            int n = cmd.ExecuteNonQuery();
            if (n > 0)
                Response.Write("Record Inserted Successfully");
            else
                Response.Write("Error");
        }
    }
}