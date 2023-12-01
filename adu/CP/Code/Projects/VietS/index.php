<?php
	//session_start();
	if (!isset($_SESSION['username'])) {
		header('Location: forms/login.php');
}
?>
<html>
	<head>
		<link rel="stylesheet" href="style.css" />
		<title>VietS</title>
		<link rel="icon" href="sys/favicon.png" />
	</head>
	<body style="background-color:#303030">
		<div class="navbar">
			<center>
				<script>alert('finished!');</script>
				<h2>Welcome to VietS, <?php echo $_SESSION['username']; ?>!!</h2>
				<button class="tablink" onclick="openPage('Home', this, '#777777')" id="defaultOpen">Home</button>
				<button class="tablink" onclick="openPage('News', this, '#777777')">News</button>
				<button class="tablink" onclick="openPage('Users', this, '#777777')">Users</button>
				<button class="tablink" onclick="openPage('About', this, '#7777777')">About</button>
				<div id="Home" class="tabcontent">
  					<h3>Home</h3>
  					<p>Home is where the heart is..</p>
				</div>
				<div id="News" class="tabcontent">
  					<h3>VMessenger</h3>
  					<p>Some news this fine day!</p> 
				</div>
				<div id="Users" class="tabcontent">
					<h3>//List of users:</h3>
					<?php
						$file=fopen("sys/list.txt","r");
						while (!feof($file)){
							echo fgets($file);
							echo '<br/>';
						}
						fclose($file);
					?>
				</div>
				<div id="About" class="tabcontent">
 					<h3>About</h3>
				  	<p>Just a new social network ...</p>
					<p>Website's author: Nguyen Thanh Cong - 8A6</p>
					<p>Developers: Nguyen Thanh Cong - 8A6</p>
					<p>Website was published on N/A by Nguyen Thanh Cong</p>
					<p>Hosted by Github.com</p>
				</div>
			</center>
		</div>
		<script>
			function openPage(pageName,elmnt,color) {
  				var i, tabcontent, tablinks;
  				tabcontent = document.getElementsByClassName("tabcontent");
  				for (i = 0; i < tabcontent.length; i++) {
    				tabcontent[i].style.display = "none";
  				}
  				tablinks = document.getElementsByClassName("tablink");
  				for (i = 0; i < tablinks.length; i++) {
    				tablinks[i].style.backgroundColor = "";
  				}
  				document.getElementById(pageName).style.display = "block";
  				elmnt.style.backgroundColor = color;
			}
			document.getElementById("defaultOpen").click();
		</script>
	</body>
</html>