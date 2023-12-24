package project.cloud;

import java.util.List;
import javax.persistence.Entity;
import javax.persistence.Id;
import javax.persistence.ManyToMany;

@Entity
public class Language {

	@Id
	int languageCode;
	String languageName;
	@ManyToMany
	List<Trainer> trainers;

	public Language() {
		super();
	}

	public Language(int languageCode, String languageName, List<Trainer> trainers) {
		super();
		this.languageCode = languageCode;
		this.languageName = languageName;
		this.trainers = trainers;
	}

	public void setLanguageCode(int languageCode) {
		this.languageCode = languageCode;
	}

	public void setLanguageName(String languageName) {
		this.languageName = languageName;
	}

	public void setTrainers(List<Trainer> trainers) {
		this.trainers = trainers;
	}
	
}
