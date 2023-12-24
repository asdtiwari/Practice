/*WAP to store and manage the data of bank*/
#include<stdio.h>
#include<string.h>
struct Bank
{
	char name[20],ac[15],mobile[11],aadhaar[13];
	long long int balance;
	int pin,age;
};
void main()
{
	void Bank();
	void Customer();
	int ch;
	do
	{
		printf("\n=======================");
		printf("\n!Welcome to SASTA BANK!\n");
		printf("-----------------------");
		printf("\nEnter your choice\n1. New Account\n2. Existing Account\n0. Exit\t");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				Bank();
				break;
			case 2:
				Customer();
				break;
			case 0:
				printf("\n!Thanks to use me!\n!Exit!\n");
				break;
			default:
				printf("\n!Invalid choice!\n");
				break;
		}
	}while(ch!=0);
}
void Bank()
{
	struct Bank cust;
	FILE *p;
	void AC(char [],char []);
	int Pin();
	struct Bank Details(struct Bank);
	char ac[15];
	AC(cust.ac,ac);
	p=fopen(ac,"w");
	printf("\n!Account created successfully!\nID is %s\n",cust.ac);
	printf("------------------------------");
	cust.pin=Pin();
	printf("\n!Pin created succussfully!\n");
	printf("------------------------------");
	cust=Details(cust);
	printf("\n!Everything is OK!\n");
	printf("------------------------------");
	fwrite((char*)&cust,sizeof(cust),1,p);
	fclose(p);
}
void AC(char ac[15],char act[15])
{
	int i;
	label:
	printf("\nEnter mobile number\n");
	scanf("%s",ac);
	for(i=0;ac[i]!='\0';i++)
	{
		if(ac[i]<48||ac[i]>57)
		{
			printf("\n!Please enter valid mobile number!\n");
			goto label;
		}
	}
	if((strlen(ac))!=10)
	{
		printf("\n!Mobile number should be of 10 digits!\n");
		goto label;
	}
	strcpy(act,ac);
	strcat(act,".txt");
}
int Pin()
{
	int pin,conf;
	label:
	printf("\nEnter 4 digits pin ");
	scanf("%d",&pin);
	if(pin<1000||pin>9999)
	{
		printf("\n!Please enter 4 digits pin!\n");
		goto label;
	}
	printf("\nRe-enter pin to confirm ");
	scanf("%d",&conf);
	if(pin!=conf)
	{
		printf("\n!Pin Mismatched!\n");
		goto label;
	}
	return(pin);
}
struct Bank Details(struct Bank cust)
{
	int i;
	printf("\nComplete the following details\n");
	printf("\nName\t");
	scanf("%s",cust.name);
	printf("\nAge\t");
	scanf("%d",&cust.age);
	label1:
	printf("\nMobile\t");
	scanf("%s",cust.mobile);
	for(i=0;cust.mobile[i]!='\0';i++)
	{
		if(cust.mobile[i]<48||cust.mobile[i]>57)
		{
			printf("\n!Please enter valid mobile number!\n");
			goto label1;
		}
	}
	if((strlen(cust.mobile))!=10)
	{
		printf("\n!Mobile number should be of 10 digits!\n");
		goto label1;
	}
	label2:
	printf("\nAadhaar\t");
	scanf("%s",cust.aadhaar);
	for(i=0;cust.aadhaar[i]!='\0';i++)
	{
		if(cust.aadhaar[i]<48||cust.aadhaar[i]>57)
		{
			printf("\n!Please enter valid aadhaar number!\n");
			goto label2;
		}
	}
	if((strlen(cust.aadhaar))!=12)
	{
		printf("\n!Aadhaar number should be of 12 digits!\n");
		goto label2;
	}
	printf("\nEnter the deposit amount ");
	scanf("%lld",&cust.balance);
	return(cust);
}
void Customer()
{
	FILE *p,*q;
	struct Bank cust;
	char ac[15];
	int pin,ch;
	long long int tmp;
	label1:
	printf("\nEnter ID\n");
	scanf("%s",ac);
	strcat(ac,".txt");
	if((p=fopen(ac,"r"))==0)
	{
		printf("\n!Invalid ID!\n");
		goto label1;
	}
	fread((char*)&cust,sizeof(cust),1,p);
	label2:
	printf("\nEnter Pin\n");
	scanf("%d",&pin);
	if(pin!=cust.pin)
	{
		printf("\n!Pin didn't match!\n");
		goto label2;
	}
	q=fopen(ac,"w");
	do
	{
		printf("\n.........................");
		printf("\n!Welcome to your Account!\n");
		printf(".........................");
		printf("\n1. Show Details\n2. Bank Services\n0. Exit\t");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				printf("\nAc No\t%s",cust.ac);
				printf("\nName\t%s",cust.name);
				printf("\nAge\t%d",cust.age);
				printf("\nMobile\t%s",cust.mobile);
				printf("\nAadhaar\t%s",cust.aadhaar);
				printf("\nBalance\t%lld\n",cust.balance);
				break;
			case 2:
				printf("\n1. Debit\n2. Credit\n3. Balance\n0. Exit\t");
				scanf("%d",&ch);
				switch(ch)
				{
					case 1:
						printf("\nEnter debited amount ");
						scanf("%lld",&tmp);
						if(cust.balance<tmp)
						{
							printf("\n!Insufficient Balance!\n");
							printf("\nBalance\t%lld\n",cust.balance);
							break;
						}
						cust.balance-=tmp;
						printf("\nBalance\t%lld\n",cust.balance);
						break;
					case 2:
						printf("\nEnter credited amount ");
						scanf("%lld",&tmp);
						cust.balance+=tmp;
						printf("\nBalance\t%lld\n",cust.balance);
						break;
					case 3:
						printf("\nBalance\t%lld\n",cust.balance);
						break;
					case 0:
						break;
					default:
						printf("\n!Invalid choice!\n");
						break;
				}
				break;
			case 0:
				break;
			default:
				printf("\n!Invalid choice!\n");
				break;
		}
	}while(ch!=0);
	fwrite((char*)&cust,sizeof(cust),1,q);
	fclose(p);
	fclose(q);
}