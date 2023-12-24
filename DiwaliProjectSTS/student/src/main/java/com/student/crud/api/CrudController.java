package com.student.crud.api;

import com.student.crud.entity.Student;

import org.springframework.web.bind.annotation.DeleteMapping;
import org.springframework.web.bind.annotation.GetMapping;
import org.springframework.web.bind.annotation.PathVariable;
import org.springframework.web.bind.annotation.PostMapping;
import org.springframework.web.bind.annotation.PutMapping;
import org.springframework.web.bind.annotation.RequestBody;
import org.springframework.web.bind.annotation.RequestMapping;
import org.springframework.web.bind.annotation.RestController;

@RestController
@RequestMapping("/crud")
public class CrudController {
	
	Student s;
	
	@PostMapping("/create")
	public String createStudent(@RequestBody Student s) {		
		this.s = s;		
		return "Student added Successfully";
	}
	
	@GetMapping(value="/read/{id}")
	public Student getInfo(@PathVariable("id") String id) {
		return s;
	}
	
	@PutMapping("/update")
	public String UpdateStudent(@RequestBody Student s) {
		this.s = s;
		return "Student updated";
	}
	
	@DeleteMapping("/delete/{id}")
	public Student deleteStudent(@PathVariable("id") @RequestBody String id) {		
		if(id.equals(s.getId()) == true) {
			s = null;
			return s;
		}
		return s;
	}
}