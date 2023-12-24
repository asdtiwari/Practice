package com.acer.program1;

public class RaceConditionDemo {

	public static void main(String[] args) {
		MSWord msword = new MSWord();
		
		Thread t1 = new Thread(msword);
		Thread t2 = new Thread(msword);
		Thread t3 = new Thread(msword);
		
		t1.setName("type");
		t2.setName("spell");
		t3.setName("save");
		
		t2.setDaemon(true);
		t3.setDaemon(true);
		
		t1.setPriority(5);
		t2.setPriority(4);
		t3.setPriority(3);

		t1.start();
		t2.start();
		t3.start();
/*
		System.out.println(t1);
		System.out.println(t2);
		System.out.println(t3);
				*/
	}
}
