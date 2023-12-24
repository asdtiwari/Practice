package com.form.multiThreadingProblems;

public class Warrior extends Thread{

	String astra1 = "SARPASTRA";
	String astra2 = "BHRAMASTRA";
	String astra3 = "PASHUPATASTRA";

	@Override
	public void run() {

		if(getName().equals("Arjun")) {
			arjunAcquiredResource();
		}
		else {
			karnAcquiredResource();
		}

	}

	public void arjunAcquiredResource() {

		try {
			Thread.sleep(3000);

			synchronized (astra1) {

				System.out.println(getName() + " Acquired " + astra1 + " And Applied Lock ");
				Thread.sleep(3000);

				synchronized (astra2) {

					System.out.println(getName() + " Acquired " + astra2 + " And Applied Lock ");
					Thread.sleep(3000);

					synchronized(astra3) {
						
						System.out.println(getName() + " Acquired " + astra3 + " And Applied Lock ");
						Thread.sleep(3000);
					}
				}
			}
		}
		catch(Exception ex) {
			ex.printStackTrace();
		}
	}

	public void karnAcquiredResource() {

		try {
			Thread.sleep(3000);

			synchronized (astra1) {

				System.out.println(getName() + " Acquired " + astra1 + " And Applied Lock ");
				Thread.sleep(3000);

				synchronized (astra2) {

					System.out.println(getName() + " Acquired " + astra2 + " And Applied Lock ");
					Thread.sleep(3000);

					synchronized(astra3) {
						
						System.out.println(getName() + " Acquired " + astra3 + " And Applied Lock ");
						Thread.sleep(3000);
					}
				}
			}
		}
		catch(Exception ex) {
			ex.printStackTrace();
		}
	}

}
