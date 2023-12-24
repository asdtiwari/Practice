package project.cloud;

import java.util.ArrayList;

import org.hibernate.Session;
import org.hibernate.SessionFactory;
import org.hibernate.Transaction;
import org.hibernate.cfg.Configuration;

public class TrainerLanugageApp {

	public static void main(String[] args) {

		Language java = new Language();
		Language python = new Language();
		Language aptitude = new Language();

		ArrayList<Language> ayushList = new ArrayList<Language>();
		ayushList.add(java);
		ayushList.add(python);

		ArrayList<Language> kushalList = new ArrayList<Language>();
		kushalList.add(aptitude);
		kushalList.add(python);

		ArrayList<Language> shivaList = new ArrayList<Language>();
		shivaList.add(aptitude);
		shivaList.add(java);

		Trainer ayush = new Trainer(101, "Ayush", ayushList);
		Trainer kushal = new Trainer(102, "Kushal", kushalList);
		Trainer shiva = new Trainer(103, "Shiva", shivaList);

		ArrayList<Trainer> javaList = new ArrayList<Trainer>();
		javaList.add(ayush);
		javaList.add(shiva);

		ArrayList<Trainer> pythonList = new ArrayList<Trainer>();
		pythonList.add(ayush);
		pythonList.add(kushal);

		ArrayList<Trainer> aptitudeList = new ArrayList<Trainer>();
		aptitudeList.add(shiva);
		aptitudeList.add(kushal);
		
		java.setLanguageCode(111);
		java.setLanguageName("Java");
		java.setTrainers(javaList);
		
		python.setLanguageCode(222);
		python.setLanguageName("Python");
		python.setTrainers(pythonList);
		
		aptitude.setLanguageCode(333);
		aptitude.setLanguageName("Aptitude");
		aptitude.setTrainers(aptitudeList);
		
		Configuration cfg = new Configuration();
		cfg.configure();
		
		SessionFactory f = cfg.buildSessionFactory();
		Session s = f.openSession();
		
		Transaction t = s.beginTransaction();
		
		s.save(ayush);
		s.save(kushal);
		s.save(shiva);
		
		s.save(java);
		s.save(python);
		s.save(aptitude);
		
		t.commit();
	}

}
