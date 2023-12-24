package newLearning;

public class Brain {
	private String color;
	private float weight;
	private static Brain reference = null;
	
	private Brain(String color, float weight) {
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
	public static Brain createObject(String color, float weight) {
		if(reference == null) 
			reference = new Brain(color, weight);
		return reference;
	}
	
}
