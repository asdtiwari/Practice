package newLearning;

@SuppressWarnings("serial")
public class UnderAgeException extends Exception {
	
	@Override
	public String getMessage() {
		return "You are too young to apply for licence.. Please wait..";
	}

}
