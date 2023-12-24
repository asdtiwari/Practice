package com.acer.program1;

import java.util.Comparator;

public class SearchingStyle implements Comparator<Employee> {

	@Override
	public int compare(Employee o1, Employee o2) {
		if (o1.id != o2.id) {
			return -1;
		}
		return 0;
	}

}
