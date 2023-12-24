package newLearning;

final public class Circle extends Shape {
	private float radius;
	
	@Override
	public void takeInput() {
		System.out.print("Enter radius of Circle: ");
		radius = scan.nextFloat();
	}

	@Override
	public void calculateArea() {
		area = 3.14f * radius * radius;
	}

}
