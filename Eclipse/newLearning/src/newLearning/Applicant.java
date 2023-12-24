package newLearning;

import java.util.Scanner;

public class Applicant {
	String name;
	int age;
	
	public void acceptInputs() {
		@SuppressWarnings("resource")
		Scanner scan = new Scanner(System.in);
		
		System.out.print("Enter name: ");
		name = scan.nextLine();
		
		System.out.print("Enter age: ");
		age = scan.nextInt();
	}
	
	public void validate() throws UnderAgeException, OverAgeException, InvalidNameException{
		
		if(name.length() <= 3 || name.length() >= 25) {
			InvalidNameException ine = new InvalidNameException();
			System.out.println(ine.getMessage());
			throw ine;
		}
		else if(age < 18) {
			UnderAgeException uae = new UnderAgeException();
			System.out.println(uae.getMessage());
			throw uae;
		}
		else if(age > 60) {
			OverAgeException oae = new OverAgeException();
			System.out.println(oae.getMessage());
			throw oae;
		}
		else {
			System.out.println("Congratulation... your application is accepted");
		}
	}
}
