<!DOCTYPE html>
<html>
<head>
       <title>Form submitting to itself</title>
</head>
<body>
       <?php

       $servername = "localhost";
       $username = "root";
       $password = "";
       $dbname = "sampledata2";

       // Create connection
       $conn = new mysqli($servername, $username, $password, $dbname);
       // Check connection
       if ($conn->connect_error) {
              die("Connection failed: " . $conn->connect_error);
       }

       $roll = $name = "";

       if (isset($_POST['insert'])) {
             $uname = $_POST['uname'];
              $uno = $_POST['uno'];
              
              $sql = "INSERT INTO `emp` (`Name`, `Number`) VALUES ( '$uname','$uno')";
              if ($conn->query($sql) === TRUE) {
                     echo "<h1>New record created successfully</h1>";
              } else {
                     echo "Error: " . $sql . "<br>" . $conn->error;
              }
              $sql = "SELECT * FROM emp";
              $result = mysqli_query($conn, $sql);
              echo "<table><tr><th>Name</th><th>Number</th></tr>";
              if (mysqli_num_rows($result) > 0) {
                     while ($row = mysqli_fetch_assoc($result)) {
                            echo "<tr><td>" . $row["Name"] . "</td><td>" . $row["Number"] . "</td></tr>";
                     }
              } else {
                     echo "0 results";
              }
              echo "</table>";
       }

       if (isset($_POST['delete'])) {

              $uno = $_POST['uno'];
              $sql = "DELETE FROM emp WHERE Number='$uno'";

              if ($conn->query($sql) === TRUE) {
                     echo "<h1>Record Deleted successfully</h1>";
              } else {
                     echo "Error: " . $sql . "<br>" . $conn->error;
              }
              $sql = "SELECT * FROM emp";
              $result = mysqli_query($conn, $sql);
              echo "<table><tr><th>Name</th><th>Number</th></tr>";
              if (mysqli_num_rows($result) > 0) {
                     while ($row = mysqli_fetch_assoc($result)) {
                            echo "<tr><td>" . $row["Name"] . "</td><td>" . $row["Number"] . "</td></tr>";
                     }
              } else {
                     echo "0 results";
              }
              echo "</table>";
       }

       if (isset($_POST['update'])) {

              $uno = $_POST['uno'];
              $uname = $_POST['uname'];
              $sql = "UPDATE emp SET  Name ='$uname' WHERE Number='$uno'";

              if ($conn->query($sql) === TRUE) {
                     echo "<h1>Record updated successfully</h1>";
              } else {
                     echo "Error: " . $sql . "<br>" . $conn->error;
              }
              $sql = "SELECT * FROM emp";
              $result = mysqli_query($conn, $sql);
              echo "<table><tr><th>Name</th><th>Number</th></tr>";
              if (mysqli_num_rows($result) > 0) {
                     while ($row = mysqli_fetch_assoc($result)) {
                            echo "<tr><td>" . $row["Name"] . "</td><td>" . $row["Number"] . "</td></tr>";
                     }
              } else {
                     echo "0 results";
              }
              echo "</table>";
       }

       function test_input($data)
       {
              $data = trim($data);
              $data = stripslashes($data);
              $data = htmlspecialchars($data);
              return $data;
       }
       ?>

       <h1>Form submitting to itself example</h1>
       <hr>
       <h1>Insert Operation</h1>
<form action="<?php echo htmlspecialchars($_SERVER["PHP_SELF"]);?>" method="post">
    No.: <input type="text" name="uno"><br>
    Name: <input type="text" name='uname'><br>
    <input type="submit" name="insert" ><br>
</form>
<hr>
<h1>Delete Operation</h1>
<form action="<?php echo htmlspecialchars($_SERVER["PHP_SELF"]);?>" method="post">
    No.: <input type="text" name="uno"><br>
    <input type="submit" name="delete"><br>
</form>
<hr>
<h1>Update Operation</h1>
<form action="<?php echo htmlspecialchars($_SERVER["PHP_SELF"]);?>"method="post">
    No.: <input type="text" name="uno"><br>
    Name: <input type="text" name="uname"><br>
    <input type="submit" name="update"><br>
</form>

</body>

</html>