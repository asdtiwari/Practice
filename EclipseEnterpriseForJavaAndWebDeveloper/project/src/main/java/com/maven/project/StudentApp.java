package com.maven.project;

import org.springframework.context.support.ClassPathXmlApplicationContext;

public class StudentApp {

	public static void main(String[] args) {
		
		ClassPathXmlApplicationContext context = new ClassPathXmlApplicationContext("configurationForStudent.xml");
		
		Student s = (Student)context.getBean("student");
		System.out.println(s);

		Student s2 = (Student)context.getBean("student2");
		System.out.println(s2);

		context.close();
	}
}
