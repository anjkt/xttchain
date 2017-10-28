<%@ page language="java" contentType="text/html; charset=ISO-8859-1"
    pageEncoding="ISO-8859-1"%>
    <%@page import="java.sql.DriverManager"%>
<%@page import="java.sql.ResultSet"%>
<%@page import="java.sql.PreparedStatement"%>
<%@page import="java.sql.Connection"%>
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
<script src="https://ajax.googleapis.com/ajax/libs/jquery/1.11.0/jquery.min.js"></script>
      <link rel="stylesheet" href="css/styleL.css">
<style>
.button {
    background-color: #4CAF50; /* Green */
    border: none;
    color: white;
    padding: 16px 32px;
    text-align: center;
    border-radius:10px;
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

table {
    border-collapse: collapse;
    width: 100%;
}
th, td {
    text-align: left;
    padding: 8px;
	border: 1px solid black;
}

tr:nth-child(even){background-color: #f2f2f2}

</style>
 <script>
 $(document).ready(function() {
	  setInterval(function() {
	    cache_clear()
	  }, 3000);
	});

	function cache_clear() {
	  window.location.reload(true);
	  // window.location.reload(); use this if you do not remove cache
	}
 
 </script>
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
    
    
    <%
    try
    {
    PreparedStatement pst = null;
    ResultSet rs = null;
    
    Connection conn = null;
    String pass = null;
    conn = (Connection) getServletContext().getAttribute("Conn");
    
    if(conn!=null)
    {
    	System.out.println("good");
        pass =(String)request.getSession().getAttribute("ano");
    	System.out.println(pass);
    
    	pst = conn.prepareStatement("Select * from Bank where AadharNo=?");
        pst.setString(1, pass);
        rs = pst.executeQuery();
        
        while(rs.next())
        {
     	
        	pass = rs.getString("Money");
        	request.getSession().setAttribute("Mny", pass);

        	
        	System.out.println((String)request.getSession().getAttribute("Mny"));
        }
    }
    
    }catch(Exception k)	
    {
    	System.out.println("No");
    }
    
    
    %>
        <div class="container">
            <div class="container__item landing-page-container">
                <div class="content__wrapper">

                    <header class="header">
                        <div class="menu-icon header__item">
                            <span class="menu-icon__line">
                             </span>
                        </div>

                        <h1 class="heading header__item">xTTCHAIN:<span style="color:RED;">&nbsp;&nbsp;DASHBOARD</span></h1>

                      
                        
            <div style="align:right;">
                        <h2 class="page-title">Welcome:<span style="color:RED;">
                            <!--PUT THE NAME AND DETAIL HERE-->
                        <b>${omg}</b>
                        </span></h2>
<img src="img/man.jpg" style="height:200px;width:180px;margin-bottom:5px;border-radius:5px;">
<form  action=".\on" method = "post">
    
    <button type="submit" name="logout" value="LOGOUT" class="button button2">Logout</button>
</form>
                        		   
                           
                          
                 </div>  
                 
                 
                  </header>

                    <div class="ellipses-container">

                        <h2 class="greeting" style="text-align:center;">Your Balance&nbsp;&nbsp;&nbsp;&nbsp; :&nbsp;&nbsp;&nbsp;&nbsp; <span style="color:RED;"><b>${Mny}</b></span></h2>
                   	<br><br><br><br><br>
<table>
  <tr>
    <th>Location</th>
    <th>Previous Bal</th>
    <th>Remaining Bal</th>
    <th>Fare</th>
  </tr>
  <tr>
    <td>NH-38</td>
    <td>1500</td>
    <td>1330</td>
    <td>170</td>
  </tr>
  <tr>
    <td>NH-23</td>
    <td>1330</td>
    <td>1000</td>
    <td>330</td>
  </tr>
  <tr>
    <td>NH-34</td>
    <td>1000</td>
    <td>850</td>
    <td>150</td>
  </tr>
  <tr>
    <td>NH-33</td>
    <td>850</td>
    <td>50</td>
    <td>700</td>
  </tr>
  <tr>
    <td>NH-23</td>
    <td>700</td>
    <td>330</td>
    <td>370</td>
  </tr>
  <tr>
    <td>NH-38</td>
    <td>370</td>
    <td>200</td>
    <td>170</td>
  </tr>
  <tr>
    <td>NH-58</td>
    <td>170</td>
    <td>70</td>
    <td>100</td>
  </tr>
</table>

                   	
                   
                   </div>
                   
                </div>

            </div>

        </div>
</body>

</html>