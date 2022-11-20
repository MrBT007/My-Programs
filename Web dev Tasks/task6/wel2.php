<?php
$servername = "localhost";
$username = "root";
$password = "";
$dbname = "sampledata1";

// Create connection
$conn = mysqli_connect($servername, $username, $password, $dbname);
// Check connection
if (!$conn) {
  die("Connection failed: " . mysqli_connect_error());
}
$uname=$_POST['uname'];
$unumber=$_POST['unumber'];
$sql = "INSERT INTO emp (Name,Number)
VALUES ('$uname', '$unumber')";

if (mysqli_query($conn, $sql)) {
  echo "New record created successfully";
} else {
  echo "Error: " . $sql . "<br>" . mysqli_error($conn);
}
mysqli_close($conn);
?>
<a href="welcome1.php">Click here to go back</a>