package com.maven.project;

import java.util.ArrayList;
import java.util.HashSet;
import java.util.HashMap;

public class Trainer {

	ArrayList<String> subjects;
	HashSet<String> students;
	HashMap<Integer, String> batches;
	
	public Trainer() {
		super();
	}

	public Trainer(ArrayList<String> subjects, HashSet<String> students, HashMap<Integer, String> batches) {
		super();
		this.subjects = subjects;
		this.students = students;
		this.batches = batches;
	}

	public ArrayList<String> getSubjects() {
		return subjects;
	}

	public void setSubjects(ArrayList<String> subjects) {
		this.subjects = subjects;
	}

	public HashSet<String> getStudents() {
		return students;
	}

	public void setStudents(HashSet<String> students) {
		this.students = students;
	}

	public HashMap<Integer, String> getBatches() {
		return batches;
	}

	public void setBatches(HashMap<Integer, String> batches) {
		this.batches = batches;
	}

	@Override
	public String toString() {
		return "Trainer [subjects=" + subjects + ", students=" + students + ", batches=" + batches + "]";
	}
	
}
