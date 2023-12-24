package com.acer.program1;

public class Demo3  implements Runnable{
	
	public void run() {
		
		//Multiplication Activity
		
		System.out.println("Multiplication Activity Started");
		
		int a = 500;
		int b = 2;
		int c = a*b;
		
		System.out.println(a + " * " + b + " = " + c);
		
		System.out.println("Multiplication Activity Ended");
	}

}
