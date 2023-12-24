package newLearning;

import java.util.InputMismatchException;
import java.util.Scanner;

public class Demo {
	public static void main(String[] args) {

		System.out.println("Connection Established");
		Scanner scan = new Scanner(System.in);
		try {
			System.out.print("Enter two numbers for division: ");
			int a = scan.nextInt();
			int b = scan.nextInt();

			int c = a/b;
			System.out.println(a + " / " + b + " = " + c);

			System.out.print("Enter Array Length: ");
			int []arr = new int[scan.nextInt()];

			System.out.println("Enter an Element: ");
			a = scan.nextInt();
			System.out.println("Enter postion to insert: ");
			b = scan.nextInt();
			arr[b] = a;

			System.out.println("Element " + a + " at index " + b);
		}
		catch(InputMismatchException ex) {
			System.out.println("InputMismatchException Caugth");
		}
		catch(ArithmeticException ex) {
			System.out.println("ArithmeticException Caught. Divide by 0 is not possible.");
		}
		catch(NegativeArraySizeException ex) {
			System.out.println("NegativeArraySizeException Caught.");
		}
		catch(ArrayIndexOutOfBoundsException ex) {
			System.out.println("ArrayIndexOutOfBoundsException Caught.");
		}
		catch(Exception ex) {
			System.out.println("Exception Caught.");
		}
		System.out.println("Connection Terminated");
		scan.close();
	}
}
