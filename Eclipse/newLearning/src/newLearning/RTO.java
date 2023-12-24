package newLearning;

public class RTO {

	public void initiate() {
		Applicant applicant = new Applicant();
		try {
			applicant.acceptInputs();
			applicant.validate();
		}
		catch(Exception ex1) {
			System.out.println("Try Again...");
			try {
				applicant.acceptInputs();
				applicant.validate();
			}
			catch(Exception ex2) {
				System.out.println("Try Again...");
				try {
					applicant.acceptInputs();
					applicant.validate();
				}
				catch(Exception ex3) {
					System.out.println("applicant blocked... Never Try Again");
				}
			}
		}
	}
}
