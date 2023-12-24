package com.student.crud.repository;

import org.springframework.data.jpa.repository.JpaRepository;

import com.student.crud.entity.Student;

// Marker Interface or Tag Interface
public interface StudentRepository extends JpaRepository<Student, String>{

}
