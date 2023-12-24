package com.form.multiThreadingProblems;

public class BlockedStateDemo {

	public static void main(String[] args) {

		Warrior w1 = new Warrior();
		Warrior w2 = new Warrior();
		
		w1.setName("Arjun");
		w2.setName("Karan");
		
		w1.start();
		w2.start();
		 
	}

}
