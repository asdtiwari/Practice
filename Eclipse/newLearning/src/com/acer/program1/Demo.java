package com.acer.program1;

import java.util.Scanner;

public  class Demo implements Runnable{
	Scanner scan = new Scanner(System.in);
	
	@Override
	public void run() {
		
		try {
			// Banking Activity
			System.out.println("Banking Activity Started");
			
			System.out.println("Enter your account number: ");
			int accNO = scan.nextInt();
			
			System.out.println("Enter your code: ");
			int code = scan.nextInt();
			
			System.out.print(accNO + " with " + code);
			System.out.println(" Collect the money");
			
		}
		catch(Exception ex) {
			ex.printStackTrace();
			
		}
		finally {
			System.out.println("Banking Activity Ended");
			
		}
	}
}