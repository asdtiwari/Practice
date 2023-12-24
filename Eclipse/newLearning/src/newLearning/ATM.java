package newLearning;

import java.util.Scanner;

public class ATM {
	
	private final static int pin = 1590;

	public void work() throws Exception {

		System.out.println("Connection 3 Established - ATM work Started");

		Scanner in = new Scanner(System.in);

		try {
			System.out.print("Enter the pin: ");
			if(pin == (in.nextInt()))			
				System.out.println("Verified");
			else
				throw new Exception();
		}
		catch(Exception ex) {
			System.out.println("Exception caugth and handled in ATM");
			throw ex;
		}
		finally {
			in.close();
			System.out.println("Connection 3 Terminated - ATM work Stopped");
		}
	}
}
