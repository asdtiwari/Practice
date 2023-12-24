package newLearning;

@SuppressWarnings("serial")
public class OverAgeException extends Exception {
	
	@Override
	public String getMessage() {
		return "You are too old to apply for licence.. Don't take risk at this age";
	}

}
