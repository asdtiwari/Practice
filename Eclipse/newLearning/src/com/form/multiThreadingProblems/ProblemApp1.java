package com.form.multiThreadingProblems;

public class ProblemApp1 {

	public static void main(String[] args) {

		BathRoom1 bathroom1 = new BathRoom1();

		Thread boy = new Thread(bathroom1);
		Thread girl = new Thread(bathroom1);
		Thread other = new Thread(bathroom1);

		boy.setName("boy");
		girl.setName("girl");
		other.setName("other");
		
		boy.start();
		girl.start();
		other.start();

	}
}
