package com.form.multiThreadingProblems;

public class BathRoom implements Runnable {

	@Override
	public void run() {
		try {
			System.out.println(Thread.currentThread().getName() + " IS ENTERING THE BATHROOM");
			Thread.sleep(3000);

			System.out.println(Thread.currentThread().getName() + " IS USING THE BATHROOM");
			Thread.sleep(3000);

			System.out.println(Thread.currentThread().getName() + " IS EXITING THE BATHROOM");
			Thread.sleep(3000);
		}
		catch(Exception ex) {
			ex.printStackTrace();
		}
	}


}
