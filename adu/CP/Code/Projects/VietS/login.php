<!DOCTYPE html>
<html>
    <head>
        <link rel="stylesheet" href="style.css" />
        <link rel="icon" href="sys/favicon.png" />
        <title>VietS Registration Form</title>
    </head>
<body style="font-family: luna;">
<?php
    echo $_COOKIE["err"];
    setcookie("err","",time() + (86400 * 30),"/");
?>
<center>
<h1>Login Form</h1>
<form method="post" action="login.php">
    <table>
            <tr>
                <td>
                    Full name:
                </td>
                <td>
                    <input type="text" name="name" placeholder="VD:John Cena, ...">
                </td>
            </tr>
            <tr>
                <td>
                    Username:
                </td>
                <td>
                    <input type="text" name="usr" placeholder="VD: root,admin,...">
                </td>
            </tr>
            <tr>
                <td>
                    Email Address:
                </td>
                <td>
                    <input type="text" name="mail" placeholder="abc@xyz.com">
                </td>
            </tr>
            <tr>
                <td>
                    Password:
                </td>
                <td>
                    <input type="password" name="pass" placeholder="ur password...">
                </td>
            </tr>
            <tr>
                <td>
                    Class:
                </td>
                <td>
                    <input type="text" name="class" placeholder="VD: 6A9">
                </td>
            </tr>
            <tr>
                <td>
                    <input type="submit" name="submit">
                </td>
            </tr>
    </table>
</form>
</center>
</body>
</html>