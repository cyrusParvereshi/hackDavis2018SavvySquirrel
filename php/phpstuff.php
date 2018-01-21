<?php
// DB config variables

define ("HOST", "localhost");
define ("DBNAME", "new_assignment");
define ("DBUSER", "WebUserDB97");
define ("PWD", "Password2!");
	$dbc = 0; 

	$dbc = mysqli_connect(HOST, DBUSER, PWD, DBNAME)
		or die ('Cannot connect to this database');

?>
