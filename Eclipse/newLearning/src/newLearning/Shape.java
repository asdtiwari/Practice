package newLearning;

import java.util.Scanner;

public abstract class Shape {
	public float area;
	public Scanner scan = new Scanner(System.in);
	
	public abstract void takeInput();
	public abstract void calculateArea();
	
	public void displayArea() {
		System.out.println("Area is " + area + " sq unit");
	}
}
