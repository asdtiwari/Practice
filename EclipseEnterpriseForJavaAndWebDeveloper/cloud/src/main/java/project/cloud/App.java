package project.cloud;

import java.util.ArrayList;
import org.hibernate.Session;
import org.hibernate.cfg.Configuration;
import org.hibernate.SessionFactory;
import org.hibernate.Transaction;

public class App 
{
    public static void main( String[] args )
    {

    	Laptop l1 = new Laptop();
    	Laptop l2 = new Laptop();
    	Laptop l3 = new Laptop();
    	Laptop l4 = new Laptop();
    	
    	ArrayList<Laptop> list1 = new ArrayList<Laptop>();
    	list1.add(l1);
    	list1.add(l2);
    	
    	ArrayList<Laptop> list2 = new ArrayList<Laptop>();
    	list2.add(l3);
    	list2.add(l4);
    	
    	Employee e1 = new Employee(101, "Ankit", 50000, list1);
    	Employee e2 = new Employee(102, "Ayush", 99000, list2);

    	l1.setId(1111);
    	l1.setBrandName("Lenevo");
    	l1.setEmp(e1);
    	
    	l2.setId(2222);
    	l2.setBrandName("Dell");
    	l2.setEmp(e1);
    	
    	l3.setId(3333);
    	l3.setBrandName("Acer");
    	l3.setEmp(e2);
    	
    	l4.setId(4444);
    	l4.setBrandName("HP");
    	l4.setEmp(e2);
    	
    	Configuration cfg = new Configuration();
    	cfg.configure();
    	
    	SessionFactory factory = cfg.buildSessionFactory();
    	Session s = factory.openSession();
    	
    	Transaction t = s.beginTransaction();
    	
    	s.save(e1);
    	s.save(e2);

    	s.save(l1);
    	s.save(l2);
    	s.save(l3);
    	s.save(l4);
    	
    	t.commit();
    }
}
