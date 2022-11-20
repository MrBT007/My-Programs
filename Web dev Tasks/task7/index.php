<html><link rel="stylesheet" href="style.css"></html>
<div class="container">
<h1>Login<h1>
<form method="post" action="login.php" name="f" onsubmit="return auth()">
    <input type="text" name="username"  id="username" placeholder="username"><br>
    <input type="text" name="password" id="password" placeholder="password"><br>
    <input type="submit" id="btlogin" name="submit1" value="Login"><br>
</form>
<!-- <hr> -->
<h1>Register<h1>
<form method="post" action="signup.php" name="f2" onsubmit="auth1()">
    <input type="text" name="username"  id="username" placeholder="username"><br>
    <input type="text" name="email" id="email" placeholder="email"><br>
    <input type="text" name="password" id="password" placeholder="password"><br>
    <input type="text" name="cpassword" id="cpassword" placeholder="Confirm Password"><br> 
    <input class="bt" type="submit" id="btsignup" value="Signup">
</form>
</div>
<script>
    function auth(){
        var id = document.f.username.value;
        var pass = document.f.password.value;
        if(id.length=="" && pass.length==""){
            alert("User Name and Password cant be empty");  
            return false;
        }
        else{
            if(id.length==""){
                alert("User Name is empty");  
                return false;  
            }
            if (pass.length=="") {  
                alert("Password is empty");  
                return false;  
             }  
        }
    }
    function auth1(){
        var id = document.f2.username.value;
        var mail = document.f2.email.value
        var pass = document.f2.password.value;
        var cpass = document.f2.cpassword.value;
        if(id.length=="" && pass.length=="" && mail.length==""){
            alert("Username, Email and Password cant be empty");  
            return false;
        }
        else{
            if(id.length==""){
                alert("User Name is empty");  
                return false;  
            }
            if (pass.length=="") {  
                alert("Password is empty");  
                return false;  
            }
            if (email.length=="") {  
                alert("Email is empty");  
                return false;  
            }
            if(email.length!="" && pass.length!="" && id.length!="" && pass!=cpass ){
                alert("Confim password dosent matches with password");  
                return false;  
            }
        }
    }
</script>