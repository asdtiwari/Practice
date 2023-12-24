package project.cloud;

import javax.persistence.Column;
import javax.persistence.Entity;
import javax.persistence.Id;
import javax.persistence.Table;

@Entity @Table(name="motor_cycle")
public class Bike {

	@Id
	int modelNumber;
	String brand;
	@Column(name="price")
	int cost;
	
	public Bike() {
		super();
	}

	public Bike(int modelNumber, String brand, int cost) {
		super();
		this.modelNumber = modelNumber;
		this.brand = brand;
		this.cost = cost;
	}

	@Override
	public String toString() {
		return "Bike [modelNumber=" + modelNumber + ", brand=" + brand + ", cost=" + cost + "]";
	}
	
}
