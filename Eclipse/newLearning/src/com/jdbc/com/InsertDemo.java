package com.jdbc.com;

import java.sql.*;

public class InsertDemo {

	public static void main(String[] args) {
		
		String url = "jdbc:mysql://localhost/demo";
		String user = "ASDTiwari";
		String code = "0@ASDTiwari";
		String sql = "insert into student values (555, 'Anushka', 90);";
		
		try {
			
			Connection con = DriverManager.getConnection(url,user,code);
			
			System.out.println("Connection Established " + con);
			
			Statement st = con.createStatement();
			
			int row = st.executeUpdate(sql);
			
			System.out.println("Rows Updated: " + row);
			
		}catch(Exception ex) {
			
			ex.printStackTrace();
		}
	}
}
