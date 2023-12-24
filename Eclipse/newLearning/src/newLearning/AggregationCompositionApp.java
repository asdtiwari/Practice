package newLearning;

public class AggregationCompositionApp {
	public static void main(String [] args) {
		Student student = new Student(2200648, "Akhilesh", "Male", "babitiwari9@hotmail.com", "7000454120");

		String str;

		str = String.format("Brain Info \n %s color %.2f gm ", student.brain.getColor(), student.brain.getWeight());
		System.out.println(str);

		str = String.format("Heart Info \n %s color %.2f gm", student.heart.getColor(), student.heart.getWeight());
		System.out.println(str);

		System.out.println();

		System.out.println("Student Details");
		str = String.format(" ID \t : %d \n Name \t : %s \n Sex \t : %s \n Email \t : %s \n PhNo \t : %s", student.getId(), student.getName(), student.getGender(), student.getEmail(), student.getPhno());
		System.out.println(str);

		System.out.println();

		student.eat();
		student.study();
		student.sleep();

		System.out.println();

		Bike bike = new Bike("Yamaha", 1100000);
		student.acceptBike(bike);

		System.out.println();

		Book book = new Book("Let Us C", "Yashwant Kanetkar", 250);
		student.acceptBook(book);
	}
}
