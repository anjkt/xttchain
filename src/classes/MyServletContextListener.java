package classes;

import java.sql.Connection;
import java.sql.SQLException;

import javax.servlet.*;

import database.DatabaseConnection;


 /*
  * THIS IS THE LISTENER CLASS MADE UP FOR VERY FIRST INITIALISATION WORKS LIKE THE DATABASE
  */
public class MyServletContextListener implements ServletContextListener{

	public static Connection conn = null;
	
	public void contextInitialized(ServletContextEvent event){
		
		ServletContext sc = event.getServletContext();

		conn = DatabaseConnection.set_up_connection();
				
		if (conn==null)
        {
			System.out.println("CONNECTION TO DATABASE IS LOST AT THE LISTENER STAGE");
        }
        else
        {
        	sc.setAttribute("Conn", conn);
        	System.out.println("CONNECTION TO DATABASE IS MADED AT UP THE LISTENER STAGE");  	
        }	
	}
	
	
	public void contextDestroyed(ServletContextEvent event){
      
		try {
			conn.close();
			System.out.println("CONNECTION TO DATABASE IS CLOSED AT UP THE LISTENER STAGE");
		} catch (SQLException e) {
			//e.printStackTrace();
			System.out.println("CONNECTION TO DATABASE IS NOT CLOSED AT UP THE LISTENER STAGE");
		}		
		
	}
	
}
