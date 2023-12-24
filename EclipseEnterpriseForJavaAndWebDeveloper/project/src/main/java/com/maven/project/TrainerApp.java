package com.maven.project;

import org.springframework.context.support.ClassPathXmlApplicationContext;

public class TrainerApp {

	public static void main(String[] args) {
		
		ClassPathXmlApplicationContext context = new ClassPathXmlApplicationContext("TrainerConfiguration.xml");
		
		Trainer t = (Trainer)context.getBean("trainer");
		System.out.println(t);
		
		context.close();
	}
}