package project.cloud;

import javax.persistence.Entity;
import javax.persistence.Id;
import javax.persistence.ManyToOne;

@Entity
public class Laptop {

	@Id
	int id;
	String brandName;
	@ManyToOne
	Employee emp;
	
	public Laptop() {
		super();
	}

	public Laptop(int id, String brandName, Employee emp) {
		super();
		this.id = id;
		this.brandName = brandName;
		this.emp = emp;
	}

	public void setId(int id) {
		this.id = id;
	}

	public void setBrandName(String brandName) {
		this.brandName = brandName;
	}

	public void setEmp(Employee emp) {
		this.emp = emp;
	}

}
