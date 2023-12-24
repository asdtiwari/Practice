package com.acer.program1;

public class Demo2 implements Runnable {
	
	public void run() {
		
		//Printing Activity
		try {
			System.out.println("Printing Activity Started");
			
			for(int i = 0; i < 3; i++) {
				System.out.println("Akhilesh Tiwari is Online");
				Thread.sleep(2000);
			}
		
		}
		catch(Exception ex) {
			ex.printStackTrace();
			
		}
		finally {
			System.out.println("Printing Activity Ended");
			
		}
	}

}
