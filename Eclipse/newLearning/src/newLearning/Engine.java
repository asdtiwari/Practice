package newLearning;

public class Engine {
	private String type;
	private int bhp;
	private static Engine reference = null;
	
	private Engine(String type, int bhp){
		this.type = type;
		this.bhp = bhp;
	}
	
	public String getType() {
		return type;
	}
	
	public int getBhp() {
		return bhp;
	}
	
	//Singleton Pattern
	public static Engine createObject(String type, int bhp) {
		if(reference == null)
			reference = new Engine(type, bhp);
		return reference;
	}
	
}
