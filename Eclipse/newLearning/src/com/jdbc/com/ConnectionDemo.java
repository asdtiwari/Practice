package com.jdbc.com;

import java.sql.*;

public class ConnectionDemo {

	public static void main(String[] args) {
		
		try {
			
			Connection con = DriverManager.getConnection("jdbc:mysql://localhost/demo", "ASDTiwari", "0@ASDTiwari");
			
			System.out.println("Connection Established " + con);
			
		}catch(Exception ex) {
			
			ex.printStackTrace();
		}
	}
}
