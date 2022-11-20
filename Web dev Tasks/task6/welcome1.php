<?php
$servername = "localhost";
$username = "root";
$password = "";
$dbname = "sampledata1";
// Create connection
$conn = new mysqli($servername, $username, $password, $dbname);
// Check connection
if ($conn->connect_error) {
  die("Connection failed: " . $conn->connect_error);
}

$sql = "SELECT * FROM emp";
$result = $conn->query($sql);
if(mysqli_num_rows($result) > 0)
 {
  $table = '
   <table border=1>
                    <tr>
                         <th> Name</th>
                         <th> Number </th>
                         
                    </tr>
  ';
  while($row = mysqli_fetch_array($result))
  {
   $table .= '
    <tr>
                        <td>'.$row["Name"].'</td>
                        <td>'.$row["Number"].'</td>
                         
                    </tr>
   ';
  }
  $table .= '</table>';
  echo $table;
 } else {
  echo "0 results";
}
$conn->close();
?>
<hr>
<h1>Insert data</h1>
<form method="post" action="wel2.php">
    <input type="text" name="uname" placeholder="ENTER NAME">
    <input type="text" name="unumber" placeholder="ENTER NUMBER">
    <input type="submit" value="Send data">
</form>

<h1>Delete Data</h1>
<form method="post" action="delete.php">
    <input type="text" name="unumber1" placeholder="ENTER NUMBER">
    <input type="submit" value="Send data">
</form>

<h1>uploadate Data</h1>
<form method="post" action="upload.php">
    <input type="text" name="name" placeholder="ENTER NAME">
    <input type="text" name="unumber1" placeholder="ENTER NUMBER">
    <input type="submit" value="Send data">
</form>
