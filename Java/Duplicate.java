// WAJP to print the position of duplicate elements 

import java.util.Scanner;

public class Duplicate{

	public static void main(String [] args){

		Scanner scan = new Scanner(System.in);

		System.out.println("Duplicate Elements of Array");

		System.out.println("Enter the size of the array: ");
		int [] array = new int[scan.nextInt()];

		System.out.println("Enter " + array.length + " elements in array ");
		for(int i = 0; i < array.length - 1; i++)
			array[i] = scan.nextInt();

		Duplicate.insertionSort(array);

		System.out.println("Duplicate Elements");
		for(int num = array [0] - 1, i = 0; i < array.length; i++){

			if(array[0] > num){

				for(int j = i + 1; j < array.length - 1; j++){

					if(array[j] == array[j+1]){

						System.out.print("Duplicate element " + array[j] + " present at " + (j+1) + " Position");
					}
					else{
						i = j - 1;
						break;
					}
				}
			}
		}

	}

	public static void insertionSort(int [] array){

		for(int i = 0; i < array.length - 1; i++){

			for(int j = i + 1; j > 0; j--){

				if(array[j] < array[j-1]){

					int temp = array[j];
					array[j] = array[j-1];
					array[j-1] = temp;
				}
				else
					break;
			}
		}
	}
}
