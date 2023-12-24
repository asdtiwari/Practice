package newLearning;

final public class Rectangle extends Shape {
	private float length, width;
	
	@Override
	public void takeInput() {
		System.out.print("Enter length and width of Rectangle: ");
		length = scan.nextFloat();
		width = scan.nextFloat();
	}

	@Override
	public void calculateArea() {
		area = length * width;
	}

}
