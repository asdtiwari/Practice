package com.maven.project;

public class Student1 {

	Laptop laptop;

	public Student1() {
		super();
	}

	public Student1(Laptop laptop) {
		super();
		this.laptop = laptop;
	}

	public Laptop getLaptop() {
		return laptop;
	}

	public void setLaptop(Laptop laptop) {
		this.laptop = laptop;
	}

	@Override
	public String toString() {
		return "Student1 [laptop=" + laptop + "]";
	}
	
}
