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
	            
	            System.out.println("Done Registration");
	           
	            HttpSession session = request.getSession();
    			session.setAttribute("omg",name);
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
			
			try {
	            pst = conn.prepareStatement("Select Phone,Password,Name from UserDetails where Phone=? and Password=?");
	            pst.setString(1,user);
	            pst.setString(2,pass);
	            rs = pst.executeQuery();
	            if(rs.next())
	            {
	    		    HttpSession session = request.getSession();
	    			session.setAttribute("omg",rs.getString("Name"));
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
				System.out.println("ERROR IN LOGIN ");
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
