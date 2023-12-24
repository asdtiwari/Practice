package com.maven.project;

import org.springframework.context.support.ClassPathXmlApplicationContext;

public class Student1App {

	public static void main(String[] args) {
		
		ClassPathXmlApplicationContext context = new ClassPathXmlApplicationContext("student1Configuration.xml");
		
		Student1 student = (Student1)context.getBean("student");
		System.out.println(student);
		
		context.close();
	}
}
