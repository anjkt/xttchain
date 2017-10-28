package classes;

import java.io.IOException;
import java.sql.Connection;
import java.sql.PreparedStatement;
import java.sql.ResultSet;

import javax.servlet.ServletException;
import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;
import javax.servlet.http.HttpSession;


public class Login extends HttpServlet{


	private Connection conn = null;
	private PreparedStatement pst  = null;
	private ResultSet rs = null;
	
	private static final long serialVersionUID = 1L;
	
	protected void doPost(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
	
	try
	{
		conn = (Connection) getServletContext().getAttribute("Conn");

		String login = null;
	    login = request.getParameter("login");
		System.out.println(login);
		
		
		if(login==null){
			
			System.out.println("Sigup Part");

			String name = request.getParameter("name1");
			String ano = request.getParameter("adhr");
			String vno = request.getParameter("vno");
			String pno = request.getParameter("phn");
			String mail = request.getParameter("mail1");
			String passw = request.getParameter("newpwd");
			
			
			try {
	            pst = conn.prepareStatement("Insert into UserDetails values(?,?,?,?,?,?)");
	            pst.setString(1,name);
	            pst.setString(2,ano);
	            pst.setString(3,vno);
	            pst.setString(4,pno);
	            pst.setString(5,mail);
	            pst.setString(6,passw);
	            
	            pst.execute();
	            
	            System.out.println("Done Registration1");
	            
	            pst = conn.prepareStatement("Insert into Bank values(?,?)");
	            pst.setString(1, ano);
	            pst.setString(2, "500");
	            
	            pst.execute();
	            
	            System.out.println("Done Registration2");
	            
	           
	            HttpSession session = request.getSession();
    			session.setAttribute("omg",name);
    			session.setAttribute("Mny","500");
    			session.setAttribute("ano", ano);
    			session.setAttribute("starting", null);
    		//	session.setAttribute("currentExam", null);
    			
    			response.sendRedirect("online.jsp");
    			
	            rs.close();
	            pst.close();
			}catch(Exception n)
			{
				System.out.println("ER"+n.getMessage());
				response.sendRedirect("index.jsp");
			}

		}
		else if(login.equals("Login"))
		{
			System.out.println("Login Part");

			String user = request.getParameter("pno");
			String pass = request.getParameter("pwd");
			String extra = null;
			String M = null;
			Boolean b = false;
			try {
	            pst = conn.prepareStatement("Select Phone,Password,Name,Aadhar_No from UserDetails where Phone=? and Password=?");
	            pst.setString(1,user);
	            pst.setString(2,pass);
	            rs = pst.executeQuery();
	           while(rs.next())
	           {
	            user = rs.getString("Name");
	            pass = rs.getString("Aadhar_No");
	            extra = pass;
	            b = true;
	           }
	           
	           
	           pst = conn.prepareStatement("Select * from Bank where AadharNo=?");
	           pst.setString(1, pass);
	           rs = pst.executeQuery();
	           
	           while(rs.next())
	           {
	        	   M = rs.getString("Money");
	        	   System.out.println(M);
	           }
	           
	                      
	           
	            if(b)
	            {
	    		    HttpSession session = request.getSession();
	    			session.setAttribute("omg",user);
	    			session.setAttribute("Mny", M);
	    			session.setAttribute("ano", extra);
	    			session.setAttribute("starting", null);
	    		//	session.setAttribute("currentExam", null);
	    			
	    			response.sendRedirect("online.jsp");
	            }
	            else
	            {
	            	response.sendRedirect("index.jsp");	
	            }
	            rs.close();
	            pst.close();
			}catch(Exception n )
			{
				System.out.println("ERROR IN LOGIN "+n.getMessage());
				response.sendRedirect("index.jsp");	
			}


		}
		else
		{
			// DO Nothin
			
		}
		
	}catch(Exception j)
	{
		System.out.println(j.getMessage());
	}
			
	}
}
