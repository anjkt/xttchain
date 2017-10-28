<%@ page language="java" contentType="text/html; charset=ISO-8859-1"
    pageEncoding="ISO-8859-1"%>

<!doctype html>
<html lang="en" class="no-js">
<head>
	<meta charset="UTF-8">
	<meta name="viewport" content="width=device-width, initial-scale=1">

	<link href='http://fonts.googleapis.com/css?family=PT+Sans:400,700' rel='stylesheet' type='text/css'>

	<link rel="stylesheet" href="css/reset.css"> <!-- CSS reset -->
	<link rel="stylesheet" href="css/style.css"> <!-- Gem style -->
	<script src="js/modernizr.js"></script> <!-- Modernizr -->
  	
	<title>Log In &amp; Sign Up Form</title>
<style>
.button {
    background-color: #4CAF50; /* Green */
    border: none;
    color: white;
    padding: 16px 32px;
    text-align: center;
    text-decoration: none;
    display: inline-block;
    font-size: 16px;
    margin: 4px 2px;
    -webkit-transition-duration: 0.4s; /* Safari */
    transition-duration: 0.4s;
    cursor: pointer;
}

.button2 {
    background-color: white; 
    color: black; 
    border: 2px solid #008CBA;
}

.button2:hover {
    background-color: #008CBA;
    color: white;
}


</style>




</head>
<body>
<%

try{
     response.setHeader("Cache-Control", "no-cache, no-store, must-revalidate");
     response.setHeader("Pragma", "no-cache");
     response.setHeader("Expires", "0");
  if(!(session.getAttribute("omg")==null))
  {
	  response.sendRedirect("online.jsp");
  }
}catch(Exception m)
{
	
}
  %>
	<header role="banner">
		<div id="cd-logo"><a href="#0"><img src="img/main.png" alt="Logo"></a></div>

		<nav class="main-nav">
			<ul>
				<!-- inser more links here -->
				<li><a class="cd-signin" href="#0">Sign in</a></li>
				<li><a class="cd-signup" href="#0">Sign up</a></li>
			</ul>
		</nav>
	</header>

	<div class="cd-user-modal"> <!-- this is the entire modal form, including the background -->
		<div class="cd-user-modal-container"> <!-- this is the container wrapper -->
			<ul class="cd-switcher">
				<li><a href="#0">Sign in</a></li>
				<li><a href="#0">New account</a></li>
			</ul>

			<div id="cd-login"> <!-- log in form -->
				<form  class="cd-form" action=".\online" method = "post" >
					<p class="fieldset">
						<label class="image-replace cd-email" for="signin-email">Phone</label>
						<input class="full-width has-padding has-border" name="pno" id="signin-email" type="text" placeholder="Phone">
						<span class="cd-error-message">Error message here!</span>
					</p>

					<p class="fieldset">
						<label class="image-replace cd-password" for="signin-password">Password</label>
						<input class="full-width has-padding has-border" name="pwd" id="signin-password" type="text"  placeholder="Password">
						<a href="#0" class="hide-password">Hide</a>
						<span class="cd-error-message">Error message here!</span>
					</p>

					<p class="fieldset">
						<input type="checkbox" id="remember-me" checked>
						<label for="remember-me">Remember me</label>
					</p>

					<p class="fieldset">
						<button type="submit" name="login" value="Login" class="button button2">Login</button>
					</p>
				</form>
				
				<p class="cd-form-bottom-message"><a href="#0">Forgot your password?</a></p>
				<!-- <a href="#0" class="cd-close-form">Close</a> -->
			</div> <!-- cd-login -->

			<div id="cd-signup" > <!-- sign up form -->
				<form  class="cd-form" action=".\online" method = "post" >
					<p class="fieldset">
						<label class="image-replace cd-username" for="signup-username">Name</label>
						<input class="full-width has-padding has-border" id="signup-username" name="name1" type="text" placeholder="Enter Name">
						<span class="cd-error-message">Error message here!</span>
					</p>
					
					<p class="fieldset">
							<label class="image-replace cd-username" for="signup-username">Aadhar No</label>
							<input class="full-width has-padding has-border" id="signup-username" name="adhr" type="text" placeholder="Enter Aadhar Number">
							<span class="cd-error-message">Error message here!</span>
					</p>

					<p class="fieldset">
							<label class="image-replace cd-username" for="signup-username">Vehicle Number</label>
							<input class="full-width has-padding has-border" id="signup-username" name="vno" type="text" placeholder="Enter Vehicle number">								<span class="cd-error-message">Error message here!</span>
					</p>

					<p class="fieldset">
							<label class="image-replace cd-username" for="signup-username">Phone</label>
							<input class="full-width has-padding has-border" id="signup-username" name="phn" type="text" placeholder="Enter phone number">
							<span class="cd-error-message">Error message here!</span>
					</p>

					<p class="fieldset">
						<label class="image-replace cd-email" for="signup-email">E-mail</label>
						<input class="full-width has-padding has-border" id="signup-email" name="mail1" type="email" placeholder="Enter E-mail">
						<span class="cd-error-message">Error message here!</span>
					</p>

					<p class="fieldset">
						<label class="image-replace cd-password" for="signup-password">Password</label>
						<input class="full-width has-padding has-border" id="signup-password" type="text" name="newpwd" placeholder="Enter Password">
						<a href="#0" class="hide-password">Hide</a>
						<span class="cd-error-message">Error message here!</span>
					</p>

					<p class="fieldset">
						<input type="checkbox" id="accept-terms">
						<label for="accept-terms">I agree to the <a href="#0">Terms</a></label>
					</p>

					<p class="fieldset">
						<button type="submit" name="signup" value="Signup" class="button button1" >Signup</button>
					</p>
				</form>

				<!-- <a href="#0" class="cd-close-form">Close</a> -->
			</div> <!-- cd-signup -->

			<div id="cd-reset-password"> <!-- reset password form -->
				<p class="cd-form-message">Lost your password? Please enter your email address. You will receive a link to create a new password.</p>

				<form class="cd-form">
					<p class="fieldset">
						<label class="image-replace cd-email" for="reset-email">E-mail</label>
						<input class="full-width has-padding has-border" id="reset-email" type="email" placeholder="E-mail" name="email">
						<span class="cd-error-message">Error message here!</span>
					</p>

					<p class="fieldset">
						<input class="full-width has-padding" type="submit" value="Reset password">
					</p>
				</form>

				<p class="cd-form-bottom-message"><a href="#0">Back to log-in</a></p>
			</div> <!-- cd-reset-password -->
			<a href="#0" class="cd-close-form">Close</a>
		</div> <!-- cd-user-modal-container -->
	</div> <!-- cd-user-modal -->
<script src="http://ajax.googleapis.com/ajax/libs/jquery/1.11.0/jquery.min.js"></script>
<script src="js/main.js"></script> <!-- Gem jQuery -->
<div style="position:absolute">
	<iframe src="https://slides.com/sunnythakur/deck/embed" align="left" width="876" height="720" scrolling="no" frameborder="0" webkitallowfullscreen mozallowfullscreen allowfullscreen></iframe>
</div>
<iframe src="https://slides.com/sunnythakur/team-xcods/embed" align="right" width="876" height="720" scrolling="no" frameborder="0" webkitallowfullscreen mozallowfullscreen allowfullscreen></iframe>



</body>
</html>