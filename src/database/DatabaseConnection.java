package database;

import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.SQLException;
import java.util.logging.Level;
import java.util.logging.Logger;

public class DatabaseConnection {


    public static Connection conn;

     public static Connection set_up_connection()
     {
    try {
        Class.forName("org.sqlite.JDBC");
        try {
        	
            conn=DriverManager.getConnection("jdbc:sqlite:C:\\Users\\User\\workspace\\HashHacks\\src\\database\\db.sqlite");
            return conn;
        } catch (SQLException ex) {
            Logger.getLogger(DatabaseConnection.class.getName()).log(Level.SEVERE, null, ex);
        }
       
    } catch (ClassNotFoundException ex) {
        Logger.getLogger(DatabaseConnection.class.getName()).log(Level.SEVERE, null, ex);
    }
       return conn;   
     }
     public static void check_set_up_connecton()
     {
         conn=DatabaseConnection.set_up_connection();
         if (conn==null)
         {
             System.out.println("CONNECTION TO DATABASE IS LOST");
         }
         else
         {
         }
     }
       
    
}
