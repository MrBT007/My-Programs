<?php
$servername = "localhost";
$username = "root";
$password = "";
$dbname = "sampledata1";
$conn = mysqli_connect($servername, $username, $password, $dbname);
// Check connection
if (!$conn) {
  die("Connection failed: " . mysqli_connect_error());
}
$uno=$_POST['unumber1'];
$sql = "DELETE FROM emp WHERE Number=$uno";
if (mysqli_query($conn, $sql)) {
 echo "Record deleted successfully";
} else {
 echo "Error deleting record: " . mysqli_error($conn);
}

mysqli_close($conn);
?>

<a href="welcome1.php">Click here</a>