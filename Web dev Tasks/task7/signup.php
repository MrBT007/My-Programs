<?php
$servername = "localhost";
$username = "root";
$password = "";
$dbname = "signu";
$conn = mysqli_connect($servername, $username, $password, $dbname);
if (!$conn) {
  die("Connection failed: " . mysqli_connect_error());
}
$email = $_POST["email"];
$username = $_POST["username"]; 
$password = $_POST["password"]; 
$cpassword = $_POST["cpassword"];
$sql = "Select * from signup where Name='$username'";
$res1 = mysqli_query($conn, "select * from signup where Email='$email'") or die(mysqli_error($conn));
$count1 = mysqli_num_rows($res1);  
$result = mysqli_query($conn, $sql);    
$num = mysqli_num_rows($result); 
    if($count1==0){
        if($num == 0) {
            if(($password == $cpassword)) {
                $sql = "INSERT INTO signup VALUES (' ','$username', 
                    '$email','$password', '$cpassword')";    
                $result = mysqli_query($conn, $sql);
                if ($result) {
                    echo"<h1><center>Signup Successful</center></h1>";
                    echo 'Welcome';
                    echo $username;
                }
            } 
            else { 
                $showError = "Passwords do not match"; 
            }      
        }
        if($num>0) 
        {
            $exists="Username not available"; 
        } 
    }
    else{
        echo "Already Registered!";
    } 
?>
<br>
<a href="index.php">Logout</a><br>
