<?php
    if (!isset($_SESSION["uid"]))
        header("Location: login.php");
?>
<html>
    <head>
        <title>VChat vWEB</title>
        <link type="text/css" rel="stylesheet" href="style.css" />
    </head>
    <body>
        <center>
            <div class="box">
                <p>Welcome, <?php echo $_SESSION["uid"];?>!</p>
            </div>
        </center>
    </body>
</html>