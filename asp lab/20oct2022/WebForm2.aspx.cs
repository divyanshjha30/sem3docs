using System;
using System.Collections.Generic;
using System.Data.SqlClient;
using System.Linq;
using System.Web;
using System.Web.UI;
using System.Web.UI.WebControls;

namespace _20oct2022
{
    public partial class WebForm2 : System.Web.UI.Page
    {
        SqlConnection con;
        SqlCommand cmd;
        SqlDataReader dr;
        protected void Page_Load(object sender, EventArgs e)
        {
            con = new SqlConnection(@"Data Source=(LocalDB)\MSSQLLocalDB;AttachDbFilename=C:\Users\divya\Documents\d1.mdf;Integrated Security=True;Connect Timeout=30");
            con.Open();
        }

        protected void Button1_Click(object sender, EventArgs e)
        {
            String s_id = TextBox1.Text;
            String str = "select * from student where s_id = " + s_id;
            cmd = new SqlCommand(str, con);
            dr = cmd.ExecuteReader();
            while(dr.Read())
            {
                TextBox2.Text = dr[1].ToString();
                TextBox3.Text = dr[2].ToString();
            }
        }

        protected void Button3_Click(object sender, EventArgs e)
        {
            String k2 = TextBox2.Text;
            String k3 = TextBox3.Text;
            String q = "update student set sname = '" + k2 + "' , marks = " + k3 + "where s_id = " + TextBox1.Text;
            cmd = new SqlCommand(q, con);
            int n = cmd.ExecuteNonQuery();
            if (n > 0)
                Response.Write("Record updated succesfully");
            else
                Response.Write("Record not updated successfully");
        }
    }
}