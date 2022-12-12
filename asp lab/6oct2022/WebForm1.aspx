<%@ Page Language="C#" AutoEventWireup="true" CodeBehind="WebForm1.aspx.cs" Inherits="_6oct2022.WebForm1" %>

<!DOCTYPE html>

<html xmlns="http://www.w3.org/1999/xhtml">
<head runat="server">
    <title></title>
</head>
<body>
    <form id="form1" runat="server">
        <div>
            Courses in IITM<br />
        </div>
        <asp:UpdateProgress ID="UpdateProgress1" runat="server">
        </asp:UpdateProgress>
        <asp:BulletedList ID="BulletedList1" runat="server" DisplayMode="LinkButton" OnClick="BulletedList1_Click">
            <asp:ListItem>BCA</asp:ListItem>
            <asp:ListItem>B.Com</asp:ListItem>
            <asp:ListItem>BBA</asp:ListItem>
            <asp:ListItem>MBA</asp:ListItem>
        </asp:BulletedList>
        <asp:Label ID="Label1" runat="server" Text="Label"></asp:Label>
    </form>
</body>
</html>
