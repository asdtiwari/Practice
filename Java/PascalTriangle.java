// WAJP to print the pascal triangle

import java.util.Scanner;

public class PascalTriangle{

	public static void main(String [] args){

		Scanner scan = new Scanner(System.in);

		System.out.println("Pascal Triangle");

		System.out.print("Enter the no. of rows: ");
		int row = scan.nextInt();

		for(int i = 0; i < row; i++){

			for(int j = 0; j < row - i; j++)
				System.out.print(" ");

			for(int k = 0, j = 0; j <= i; j++){

				if(i == 0 || j == 0)
					k = 1;

				else
					k = k * (i - j + 1) / j;

				System.out.print(k + " ");
			}
			System.out.println();
		}
	}
}