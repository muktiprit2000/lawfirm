<?PHP

session_start();
session_destroy();
header("Location: adminhomepage.php"); 
?>