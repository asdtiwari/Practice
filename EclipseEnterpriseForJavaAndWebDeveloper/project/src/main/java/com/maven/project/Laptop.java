package com.maven.project;

public class Laptop {

	String brand;
	int cost;
	
	
	public Laptop() {
		super();
	}

	public Laptop(String brand, int cost) {
		super();
		this.brand = brand;
		this.cost = cost;
	}

	public String getBrand() {
		return brand;
	}

	public void setBrand(String brand) {
		this.brand = brand;
	}

	public int getCost() {
		return cost;
	}

	public void setCost(int cost) {
		this.cost = cost;
	}

	@Override
	public String toString() {
		return "Laptop [brand=" + brand + ", cost=" + cost + "]";
	}
	
}
