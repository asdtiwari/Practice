package newLearning;

public class Student extends Human{
	private int id;
	private String name;
	private String gender;
	private String email;
	private String phno;
	
	public Student(int id, String name, String gender, String email, String phno) {
		super();
		this.id = id;
		this.name = name;
		this.gender = gender;
		this.email = email;
		this.phno = phno;
	}
	
	public void eat() {
		System.out.println("Student is eating tasty food");
	}
	
	public void sleep() {
		System.out.println("Student is sleeping");
	}
	
	public void study() {
		System.out.println("Student is studying consistently");
	}
	
	public int getId() {
		return id;
	}
	
	public String getName() {
		return name;
	}
	
	public String getGender() {
		return gender;
	}
	
	public String getEmail() {
		return email;
	}
	
	public String getPhno() {
		return phno;
	}
	
	public void acceptBook(Book object) {
		System.out.println("Book Details");
		String str = String.format(" Name \t : %s \n Author : %s \n Price \t : %.2f", object.getName(), object.getAuthor(), object.getPrice());
		System.out.println(str);
	}
	
	public void acceptBike(Bike object) {
		System.out.println("Bike Details");
		String str = String.format(" Brand \t : %s \n Cost \t : %.2f \n Type \t : %s \n BHP \t : %d", object.getBrand(), object.getCost(), object.engine.getType(), object.engine.getBhp());
		System.out.println(str);
	}
}
