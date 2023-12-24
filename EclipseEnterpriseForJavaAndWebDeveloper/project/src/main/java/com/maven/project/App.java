package com.maven.project;

import org.springframework.context.support.ClassPathXmlApplicationContext;

public class App 
{
    public static void main( String[] args ){
    	
		ClassPathXmlApplicationContext context = new ClassPathXmlApplicationContext("configuration.xml");
    	
    	Player p = (Player)context.getBean("player");
    	p.exercise();
    	p.playing();
    	
    	context.close();
    }
}