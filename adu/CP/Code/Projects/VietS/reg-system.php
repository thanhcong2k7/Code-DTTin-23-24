<?php
    if(isset($_POST['submit']))
    {
        $servername = "127.0.0.1";
        $username = "vndev";
        $password = "nguyenthanhcong";
        // Create connection
        $conn = new mysqli($servername, $username, $password);
        // Create db
        $insert="INSERT INTO users (name,username,email,password,class) VALUES ('".$_POST['name']."','".$_POST['usr']."','".$_POST['mail']."','".$_POST['pass']."','".$_POST['class']."')";
        $conn->query("USE system");
        if ($conn->query("select username from users where username='".$_POST['usr']."'")->num_rows >0)
        {
            setcookie("err", "<script>alert('Username has been taken, please choose another!!');</script>", time() + (86400 * 30), "/");
            header("Location: register.php");
        }else{
            $conn->query($insert);
            session_start();
            $_SESSION['username']=$_POST['name'];
            header("Location: index.php");
        }
    }else {header("Location: reg-system.php");}
?>