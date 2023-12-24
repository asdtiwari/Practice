package newLearning;

final public class Square extends Shape {
	private float edge;
	
	@Override
	public void takeInput() {
		System.out.print("Enter edge of square: ");
		edge = scan.nextFloat();
	}

	@Override
	public void calculateArea() {
		area = edge * edge;
	}

}
