package classes;

import java.io.IOException;
import java.sql.Connection;
import java.sql.PreparedStatement;


import javax.servlet.ServletException;
import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;

public class Registration extends HttpServlet{

	private Connection conn = null;
	private PreparedStatement pst  = null;
//	private ResultSet rs = null;
	
	private static final long serialVersionUID = 1L;
	protected void doPost(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
		String name = request.getParameter("name");
		String email = request.getParameter("email");
		
		System.out.println(name);
		System.out.println(email);
		
		conn = (Connection) getServletContext().getAttribute("Conn");
		
		try
		{
		pst = conn.prepareStatement("Insert into demo values(?,?)");
        pst.setString(1,name);
        pst.setString(2,email);
        pst.execute();
		}catch(Exception k)
		{
		   System.out.println("Error for inserting the data from Ankit");
		}
		
		
	}

}
