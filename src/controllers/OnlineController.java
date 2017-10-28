package controllers;

import java.io.IOException;

import javax.servlet.ServletException;
import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;
import javax.servlet.http.HttpSession;

public class OnlineController extends HttpServlet{

	private static final long serialVersionUID = 1L;
	
	protected void doPost(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
		
	
		 if(!(request.getSession().getAttribute("omg")==null))
		  {
		  		String logout = request.getParameter("logout");
		  		//String test   = request.getParameter("Test");
		  		String test = "";
		
		  		if("LOGOUT".equals(logout))
		  		{
		  			HttpSession session = request.getSession();
			        session.removeAttribute("omg");
			        session.invalidate();
			       	System.out.println("trueeeeeeeeeeeeeeeeeeeeeeeeeeeeeee2");
		            response.sendRedirect("index.jsp");
		        }
		  		else
		  		{

		  		if(test.equals(""))
		  		{
		  			System.out.println(test);
		  			HttpSession session = request.getSession();
		  			 session.setAttribute("currentExam",null);;
		  			 session.setAttribute("starting", "start");
		  			 
					request.getSession().setAttribute("quizDuration",2);
					request.getSession().setAttribute("min",2);
					request.getSession().setAttribute("sec",0);
		  			 
		  			 
		  			 response.sendRedirect("exam");  			
		  		}
		  		}
		  }
		 else
		 {
			 response.sendRedirect("index.jsp"); 
		 }
	}	
}
