<?php
$servername = "localhost";
$username = "root";
$password = "";
$dbname = "data1";
$conn = new mysqli($servername, $username, $password, $dbname);
if ($conn->connect_error) {
  die("Connection failed: " . $conn->connect_error);
}
$sql = "SELECT * FROM employees";
$result = $conn->query($sql);
if(mysqli_num_rows($result) > 0)
 {
  $table = '
   <table border=1>
                    <tr>
                         <th> Number</th>
                         <th> Name </th>
                         
                    </tr>
  ';
  while($row = mysqli_fetch_array($result))
  {
   $table .= '
    <tr>
                        <td>'.$row["Number"].'</td>
                        <td>'.$row["Name"].'</td>
                         
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