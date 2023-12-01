<?php
    if(isset($_POST['login']))
    {
        $conn = new mysqli("localhost", "vndev", "nguyenthanhcong");
        $conn->query("use system");
        if ($conn->query("SELECT username,email,password FROM users where username='".$_POST['email']."'")->num_rows > 0) {
            if($conn->query("SELECT username,email,password FROM users where password='".$_POST['pass']."'")->num_rows > 0){
                session_start();
                $_SESSION['username']=$row['username'];
                echo "<script>alert('finished!');</script>";
                header("Location: index.php");
            }
        } else {
            echo $_POST['pass'];
          }
    }
?>