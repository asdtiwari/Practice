package project.cloud;

import org.hibernate.cfg.Configuration;
import org.hibernate.Session;
import org.hibernate.SessionFactory;
import org.hibernate.Transaction;

public class BikeApp {

	public static void main(String[] args) {
		
		Bike luna = new Bike(123, "Luna", 40000);
		//Bike apache = new Bike(321, "Apache", 100000);
		
		Configuration cfg = new Configuration();
		cfg.configure();
		
		SessionFactory f = cfg.buildSessionFactory();
		Session s = f.openSession();
		
		Transaction t = s.beginTransaction();
		
		//s.update(luna);
		//s.update(apache);
		
		s.delete(luna);	
		
		t.commit();
		
		System.out.println("Update successfully");
	}
}
