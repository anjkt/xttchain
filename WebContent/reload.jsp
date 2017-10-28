<%@ page language="java" contentType="text/html; charset=ISO-8859-1"
    pageEncoding="ISO-8859-1"%>
        <%@page import="java.sql.DriverManager"%>
<%@page import="java.sql.ResultSet"%>
<%@page import="java.sql.PreparedStatement"%>
<%@page import="java.sql.Connection"%>
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
    