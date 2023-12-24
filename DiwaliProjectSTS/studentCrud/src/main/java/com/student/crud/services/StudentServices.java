package com.student.crud.services;

import java.util.List;

import com.student.crud.entity.Student;

public interface StudentServices {

	String addStudent(Student s);
	Student getStudent(String id);
	List<Student> getAllStudent();
	String updateStudent(Student s);
	String deleteStudent(String id);
}
