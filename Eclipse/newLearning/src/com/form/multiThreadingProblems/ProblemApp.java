package com.form.multiThreadingProblems;

public class ProblemApp {

	public static void main(String[] args) {

		BathRoom bathroom = new BathRoom();

		Thread boy = new Thread(bathroom);
		Thread girl = new Thread(bathroom);
		Thread other = new Thread(bathroom);

		boy.setName("boy");
		girl.setName("girl");
		other.setName("other");

		try{
			boy.start();
			boy.join();

			girl.start();
			girl.join();

			other.start();
			other.join();
		}
		catch(Exception ex) {
			ex.printStackTrace();
		}
	}
}
