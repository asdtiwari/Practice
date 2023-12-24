package com.maven.project;

import org.springframework.context.support.ClassPathXmlApplicationContext;

public class Student2App {

	public static void main(String[] args) {
		
		ClassPathXmlApplicationContext context = new ClassPathXmlApplicationContext("student2Configuration.xml");
		
		Student2 student = context.getBean("student", Student2.class);
		System.out.println(student);
		
		context.close();
	}
}
