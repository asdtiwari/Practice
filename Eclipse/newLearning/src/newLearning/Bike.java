package newLearning;

public class Bike {
	private String brand;
	private float cost;

	//Bike has Engine
	public Engine engine = Engine.createObject("Petrol", 100);

	public Bike(String brand, float cost) {
		super();
		this.brand = brand;
		this.cost = cost;
	}

	public String getBrand() {
		return brand;
	}

	public float getCost() {
		return cost;
	}

}
