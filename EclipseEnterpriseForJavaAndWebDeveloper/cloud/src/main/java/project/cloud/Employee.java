package project.cloud;

import java.util.List;
import javax.persistence.Entity;
import javax.persistence.Id;
import javax.persistence.OneToMany;

@Entity
public class Employee {

	@Id
	int eid;
	String ename;
	int esalary;
	@OneToMany
	List<Laptop> laptop;
	
	public Employee() {
		super();
	}
	
	public Employee(int eid, String ename, int esalary, List<Laptop> laptop) {
		this.eid = eid;
		this.ename = ename;
		this.esalary = esalary;
		this.laptop = laptop;
	}
}
