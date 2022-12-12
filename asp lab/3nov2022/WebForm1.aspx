<%@ Page Language="C#" AutoEventWireup="true" CodeBehind="WebForm1.aspx.cs" Inherits="_3nov2022.WebForm1" %>

<!DOCTYPE html>

<html xmlns="http://www.w3.org/1999/xhtml">
<head runat="server">
    <title></title>
</head>
<body>
    <form id="form1" runat="server">
        <div>
            Enter some text:
            <asp:TextBox ID="TextBox1" runat="server"></asp:TextBox>
        </div>
        <asp:RequiredFieldValidator ID="r1" runat="server" ErrorMessage="Field cannot be blank" ControlToValidate ="TextBox1" BackColor ="LightYellow" Display="Static" Text ="This field is mandatory!"></asp:RequiredFieldValidator>
        <br />
        <br />
        Enter First Number:
            <asp:TextBox ID="TextBox2" runat="server"></asp:TextBox>
        <br />
        Enter Second Number:
            <asp:TextBox ID="TextBox3" runat="server"></asp:TextBox>
        <br />
        <br />
        <asp:CompareValidator ID="CompareValidator1" runat="server" ControlToCompare="TextBox2" ControlToValidate="TextBox3" ErrorMessage="MisMatch" Type="Integer">Values are not the same</asp:CompareValidator>
        <br />
        <br />
        Enter the age of employee [18-50] :
            <asp:TextBox ID="TextBox4" runat="server"></asp:TextBox>
        <br />
        <br />
        <asp:RangeValidator ID="RangeValidator1" runat="server" ControlToValidate="TextBox4" ErrorMessage="Invalid Value" MaximumValue="50" MinimumValue="18"></asp:RangeValidator>
        <br />
        <br />
        <asp:Button ID="Button1" runat="server" Text="Validate" />
        <br />
        <br />
        <asp:ValidationSummary ID="ValidationSummary1" runat="server" />
    </form>
</body>
</html>
