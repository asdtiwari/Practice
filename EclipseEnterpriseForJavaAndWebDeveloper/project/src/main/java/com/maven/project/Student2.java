package com.maven.project;

import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.beans.factory.annotation.Qualifier;

public class Student2 {

	@Autowired
	@Qualifier("bike")
	Bike bike;

	public Student2() {
		super();
		System.out.println("Constructor is called");
	}

	public Student2(Bike bike) {
		super();
		this.bike = bike;
		System.out.println("Parameterized constructor is called");
	}

	public Bike getBike() {
		return bike;
	}

	public void setBike(Bike bike) {
		this.bike = bike;
		System.out.println("Setter is called");
	}

	@Override
	public String toString() {
		return "Student2 [bike=" + bike + "]";
	}
	
}
