package project.cloud;

import javax.persistence.Entity;
import javax.persistence.Id;
import javax.persistence.OneToOne;

@Entity
public class Asset {

	@Id
	int assetId;
	String assetType;
	@OneToOne
	Employee emp;
	
	public Asset() {
		super();
	}
	
	public Asset(int assetId, String assetType, Employee emp) {
		super();
		this.assetId = assetId;
		this.assetType = assetType;
		this.emp = emp;
	}

	public void setAssetId(int assetId) {
		this.assetId = assetId;
	}

	public void setAssetType(String assetType) {
		this.assetType = assetType;
	}

	public void setEmp(Employee emp) {
		this.emp = emp;
	}
		
}
