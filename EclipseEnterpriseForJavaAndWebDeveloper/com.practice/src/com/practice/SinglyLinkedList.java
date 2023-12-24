package com.practice;

import java.util.LinkedList;
import java.util.Scanner;
public class SinglyLinkedList {

	public static void main(String [] args) {

		LinkedList<Integer> list = new LinkedList<Integer>();
		Scanner scan = new Scanner(System.in);
		int opt = 0;

		do {
			System.out.printf("\n ----- Singly Linked List ----- \n");
			System.out.printf("\n 1 :: AddFirst \n 2 :: AddLast \n 3 :: Remove \n 4 :: Traverse \n 0 :: Quit");

			System.out.printf("\n Your choice :: ");
			opt = scan.nextInt();

			switch(opt) {
			case 1:
				System.out.printf("\n Enter an Integer : ");
				list.addFirst(scan.nextInt());
				break;

			case 2:
				System.out.printf("\n Enter an Integer : ");
				list.add(scan.nextInt());
				break;

			case 3:
				System.out.printf("\n Remove first appearence of : ");
				list.removeFirstOccurrence(scan.nextInt());
				break;

			case 4: 
				System.out.println(list);
				break;

			case 0:
				System.out.println(list);
				System.out.println("Exiting...");
				break;

			default:
				System.out.println("!nvalid Choice... Try Again...");
			}
		}while(opt != 0);

		scan.close();
	}

}