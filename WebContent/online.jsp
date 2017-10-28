<%@ page language="java" contentType="text/html; charset=ISO-8859-1"
    pageEncoding="ISO-8859-1"%>
<!DOCTYPE html PUBLIC "-//W3C//DTD HTML 4.01 Transitional//EN" "http://www.w3.org/TR/html4/loose.dtd">
<html>
<head>
  <meta charset="UTF-8">
  <title>Landing Page</title>
  <link href='https://fonts.googleapis.com/css?family=Montserrat:400,700' rel='stylesheet' type='text/css'>
        <link href='https://fonts.googleapis.com/css?family=Playfair+Display:400italic,700italic' rel='stylesheet' type='text/css'>

  <link rel="stylesheet" href="https://cdnjs.cloudflare.com/ajax/libs/normalize/5.0.0/normalize.min.css">

  <link rel='stylesheet prefetch' href='https://fonts.googleapis.com/css?family=Montserrat:400,700'>
<link rel='stylesheet prefetch' href='https://fonts.googleapis.com/css?family=Playfair+Display:400italic,700italic'>

      <link rel="stylesheet" href="css/styleL.css">
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
     response.setHeader("Cache-Control", "no-cache, no-store, must-revalidate");
     response.setHeader("Pragma", "no-cache");
     response.setHeader("Expires", "0");
  if(session.getAttribute("omg")==null)
  {
	  response.sendRedirect("index.jsp");
  }
  
  if(!(session.getAttribute("starting")==null))
  {
	  response.sendRedirect("exam");
  }
  
  
%>



<head>
        <meta charset="UTF-8"/>
    </head>

    <body>
        <div class="container">
            <div class="container__item landing-page-container">
                <div class="content__wrapper">

                    <header class="header">
                        <div class="menu-icon header__item">
                            <span class="menu-icon__line">
                             </span>
                        </div>

                        <h1 class="heading header__item">xTTCHAIN:DASHBOARD</h1>

                      
                        
            <div style="align:right;">
                        <h2 class="page-title">Welcome:<span>
                            <!--PUT THE NAME AND DETAIL HERE-->
                        <b>${omg}</b>
                        </span></h2>

<form  action=".\on" method = "post">
    
    <button type="submit" name="logout" value="LOGOUT" class="button button2">Logout</button>
</form>
                        		   
                           
                          
                 </div>   </header>

                    <div class="ellipses-container">

                        <h2 class="greeting">Your Balance : <span><!--PUT THE BALANCE UPDATION HERE--></span></h2>

                       
                       
                       
                    </div>
                </div>

            </div>

        </div>

</body>

</html>