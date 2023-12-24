package com.acer.program1;

public class MSWord implements Runnable{
	
	@Override
	public void run() {
		 
		try {
			if(Thread.currentThread().getName().equals("type")){
				typing();
			}
			else if(Thread.currentThread().getName().equals("spell")) {
				spellCheck();
			}
			else {
				autoSave();
			}
		}
		catch(Exception ex) {
			ex.printStackTrace();
		}
	}
	
	public void typing() {
		
		try {
			for(int i = 0; i <= 4; i++) {
				System.out.println("Typing");
				Thread.sleep(3000);
			}
		}
		catch(Exception ex) {
			ex.printStackTrace();
		}
	}
	
	public void spellCheck() {
		
		try {
			for(;;) {
				System.out.println("Spell Checking");
				Thread.sleep(4000);
			}
		}
		catch(Exception ex) {
			ex.printStackTrace();
		}
	}
	
	public void autoSave() {
		
		try {
			for(;;) {
				System.out.println("Auto Saving");
				Thread.sleep(5000);
			}
		}
		catch(Exception ex) {
			ex.printStackTrace();
		}
	}
}
