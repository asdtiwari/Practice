package project.cloud;

import java.util.List;
import javax.persistence.Entity;
import javax.persistence.Id;
import javax.persistence.ManyToMany;

@Entity
public class Trainer {

	@Id
	int trainerId;
	String trainerName;
	@ManyToMany
	List<Language> languages;

	public Trainer() {
		super();
	}

	public Trainer(int trainerId, String trainerName, List<Language> languages) {
		super();
		this.trainerId = trainerId;
		this.trainerName = trainerName;
		this.languages = languages;
	}

	public void setTrainerId(int trainerId) {
		this.trainerId = trainerId;
	}

	public void setTrainerName(String trainerName) {
		this.trainerName = trainerName;
	}

	public void setLanguages(List<Language> languages) {
		this.languages = languages;
	}
	
}
