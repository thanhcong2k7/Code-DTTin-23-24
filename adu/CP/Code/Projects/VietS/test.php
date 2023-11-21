<?php
$servername = "127.0.0.1";
$username = "vndev";
$password = "nguyenthanhcong";

// Create connection
$conn = new mysqli($servername, $username, $password);
// Create database
$conn->query("USE test");
$conn->query("show tables");
$conn->query("CREATE TABLE test2 (id INT(6) UNSIGNED AUTO_INCREMENT PRIMARY KEY,username VARCHAR(30) NOT NULL,class VARCHAR(3) NOT NULL,name VARCHAR(30) NOT NULL,email VARCHAR(30) NOT NULL,password VARCHAR(50) NOT NULL)");
$conn->close();
?>