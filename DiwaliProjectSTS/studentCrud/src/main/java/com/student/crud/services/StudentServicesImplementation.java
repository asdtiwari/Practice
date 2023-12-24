package com.student.crud.services;

import java.util.List;

import org.springframework.stereotype.Service;

import com.student.crud.entity.Student;
import com.student.crud.repository.StudentRepository;

@Service
public class StudentServicesImplementation implements StudentServices {

	StudentRepository srepo;
	
	public StudentServicesImplementation(StudentRepository srepo) {
		super();
		this.srepo = srepo;
	}
	
	public String addStudent(Student s) {
		srepo.save(s);
		return "Student Added";
	}
	
	public String updateStudent(Student s) {
		srepo.save(s);
		return "Student Updated";
	}
	
	public Student getStudent(String id) {
		Student s = srepo.findById(id).get();
		return s;
	}
	
	public List<Student> getAllStudent() {
		List<Student> sList = srepo.findAll();
		return sList;
	}
	
	public String deleteStudent(String id) {
		srepo.deleteById(id);
		return "Student Deleted";
	}
}
