package com.acer.program1;

import java.util.ArrayList;
import java.util.Collections;

public class DemoEmployeeApp {
	
	public static void main(String[] args) {
		
		Employee e1 = new Employee(100, "Amrish");
		Employee e2 = new Employee(101, "Babita");
		
		ArrayList<Employee> em = new ArrayList<Employee>();
		em.add(e1);
		em.add(e2);
		
		System.out.println(em);
		
		Employee key = new Employee(101, "Babita");
		
		int index = Collections.binarySearch(em, key, new SearchingStyle());
		System.out.println(index);
		
	}

}
