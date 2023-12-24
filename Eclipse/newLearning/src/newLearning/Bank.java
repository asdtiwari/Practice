package newLearning;

public class Bank {
	public void initiate() {
		
		System.out.println("Connection 2 Established - Bank Initiated");
		
		try {
			new ATM().work();
		}
		catch(Exception ex) {
			System.out.println("Exception caught and handled in Bank");
		}
		finally {
			System.out.println("Connection 2 Terminated - Bank Disconnected");
		}
	}
}
