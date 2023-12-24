package com.jdbc.com;

import java.sql.*;

public class FetchDemo {

	public static void main(String[] args) {
		
		String url = "jdbc:mysql://localhost/demo";
		String user = "ASDTiwari";
		String code = "0@ASDTiwari";
		String sql = "select * from student;";
		
		try {
			
			Connection con = DriverManager.getConnection(url,user,code);
			
			System.out.println("Connection Established " + con);
			
			Statement st = con.createStatement();
			
			ResultSet rs = st.executeQuery(sql);
			
			while(rs.next()) {
				
				System.out.printf("\n " + rs.getInt(1) + " \t " + rs.getString(2) + " \t " + rs.getInt(3));
			}
			
		}catch(Exception ex) {
			
			ex.printStackTrace();
		}
	}
}
