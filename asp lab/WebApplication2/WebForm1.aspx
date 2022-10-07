<%@ Page Language="C#" AutoEventWireup="true" CodeBehind="WebForm1.aspx.cs" Inherits="WebApplication2.WebForm1" %>

<!DOCTYPE html>

<html xmlns="http://www.w3.org/1999/xhtml">
<head runat="server">
    <title></title>
</head>
<body>
    <form id="form1" runat="server">
        <div>
            Select your hobbies<br />
        </div>
        <asp:CheckBoxList ID="CheckBoxList1" runat="server" AutoPostBack="True" OnSelectedIndexChanged="CheckBoxList1_SelectedIndexChanged">
            <asp:ListItem>Music</asp:ListItem>
            <asp:ListItem>basketball</asp:ListItem>
            <asp:ListItem>gaming</asp:ListItem>
            <asp:ListItem>maths</asp:ListItem>
            <asp:ListItem>gym</asp:ListItem>
            <asp:ListItem>cycling</asp:ListItem>
        </asp:CheckBoxList>
        <br />
        <asp:Label ID="Label1" runat="server" Text="Label"></asp:Label>
    </form>
</body>
</html>
