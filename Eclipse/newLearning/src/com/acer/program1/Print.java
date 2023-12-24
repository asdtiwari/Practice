package com.acer.program1;
/*Print Pattern*/
import java.util.Scanner;

public class Print{

	public static void main(String [] args){

		new Print().pattern();
	}

	public void pattern(){

		@SuppressWarnings("resource")
		Scanner scan = new Scanner(System.in);

		System.out.print("Enter No. of Rows: ");
		int row = scan.nextInt();
		
		int [][] array = new int[row][];
		for(int i = 0; i < row; i++){
			array[i] = new int[i+1];
		}

		for(int i = 0, j, count = 1; i < row; i++){
			if((i % 2) != 0)
				j = row - 1;
			else
				j = array[i].length - 1;
			while(true){
				if((i % 2) != 0)
					j--;
				else
					j++;
				if(j == row || j == -1)
					break;
				array[j][i] = count;
				count++;
			}
		}

		for(int [] element : array){
			for(int i : element) {
				System.out.print(i);
			}
			System.out.println();
		}
	}
}