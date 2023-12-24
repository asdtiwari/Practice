package newLearning;

public class Heart {
	private String color;
	private float weight;
	private static Heart reference = null;
	
	private Heart(String color, float weight) {
		super();
		this.color = color;
		this.weight = weight;
	}
	
	public String getColor() {
		return color;
	}
	
	public float getWeight() {
		return weight;
	}
	
	//Singleton Pattern
	public static Heart createObject(String color, float weight) {
		if(reference == null) 
			reference = new Heart(color, weight);
		return reference;
	}
	
}
