package com.maven.project;

public class Student {

	int rollNo;
	String Name;
	float cgpa;
	
	public Student() {
		super();
	}

	public Student(int rollNo, String name, float cgpa) {
		super();
		this.rollNo = rollNo;
		Name = name;
		this.cgpa = cgpa;
	}

	public int getRollNo() {
		return rollNo;
	}

	public void setRollNo(int rollNo) {
		this.rollNo = rollNo;
	}

	public String getName() {
		return Name;
	}

	public void setName(String name) {
		Name = name;
	}

	public float getCgpa() {
		return cgpa;
	}

	public void setCgpa(float cgpa) {
		this.cgpa = cgpa;
	}

	@Override
	public String toString() {
		return "Student [rollNo=" + rollNo + ", Name=" + Name + ", cgpa=" + cgpa + "]";
	}
	
}
