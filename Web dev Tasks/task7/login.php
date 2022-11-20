<?php
$servername = "localhost";
$username = "root";
$password = "";
$dbname = "signu";
$conn = mysqli_connect($servername, $username, $password, $dbname);
$sql = "Select * from signup where Name='$username'";
if (!$conn) {
  die("Connection failed: " . mysqli_connect_error());
}
$username = $_POST["username"]; 
$password = $_POST["password"];
// $email=$_POST["email"]; 
$result = mysqli_query($conn, $sql);
$num = mysqli_num_rows($result); 
    if (isset($_POST["submit1"])) {
        $count = 0;
        $res = mysqli_query($conn, "select * from signup where Name='$username' && Password='$password'") or die(mysqli_error($conn));
        $count = mysqli_num_rows($res);
         if ($count == 0) {
                echo "INVALID";
        }
        else{
            echo '<h1>Login Successful</h1>';
            echo 'Welcome';
            echo $username;
        }
    }  
?>
<br>
<a href="index.php">Logout</a><br>