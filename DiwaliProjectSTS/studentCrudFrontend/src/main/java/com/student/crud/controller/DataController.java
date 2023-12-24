package com.student.crud.controller;

import org.springframework.web.bind.annotation.PostMapping;
import org.springframework.web.bind.annotation.RequestBody;
import org.springframework.web.bind.annotation.RequestMapping;
import org.springframework.web.bind.annotation.RestController;

@RestController
@RequestMapping("/dc")
public class DataController {
	
	@PostMapping
	public String acceptData(@RequestBody String data) {
		System.out.println(data);
		return data;
	}

}
