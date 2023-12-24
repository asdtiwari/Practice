package com.acer.program1;

public class MultiThreadingUsingRunnableDemo {

	public static void main(String[] args) {
		try {
			System.out.println("Main Activity Started");

			Demo d = new Demo();
			Demo2 d2 = new Demo2();
			Demo3 d3 = new Demo3();

			//Creating Extra Stacks
			Thread t = new Thread(d);
			Thread t2 = new Thread(d2);
			Thread t3 = new Thread(d3);

			System.out.println("Thread 1: " + t.isAlive());
			System.out.println("Thread 2: " + t2.isAlive());
			System.out.println("Thread 3: " + t3.isAlive());
			
			t.start();
			t2.start();
			t3.start();

			System.out.println("Thread 1: " + t.isAlive());
			System.out.println("Thread 2: " + t2.isAlive());
			System.out.println("Thread 3: " + t3.isAlive());
			
			t.join();
			t2.join();
			t3.join();

		}
		catch(Exception ex) {
			ex.printStackTrace();

		}
		finally {
			System.out.println("Main Activity Ended");

		}
	}
}
