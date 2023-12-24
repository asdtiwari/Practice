package newLearning;

@SuppressWarnings("serial")
public class InvalidNameException extends Exception{
	
	@Override
	public String getMessage() {
		return "Invalid name .. Charaters in the name should be greater than 3 and less than 20";
	}

}
