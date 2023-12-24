/*Mediator*/
#include<stdio.h>
#include<string.h>
void main()
{
	void create();
	void write();
	void read();
	int ch;
	do
	{
		printf("\n=====================");
		printf("\n!Welcome to Mediator!\n");
		printf("----------------------");
		printf("\nEnter your choice\n1. Create file\n2. Access File\n0. Exit\t");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				create();
				break;
			case 2:
				printf("\n1. Write\n2. Read\n0. Exit\t");
				scanf("%d",&ch);
				switch(ch)
				{
					case 1:
						write();
						break;
					case 2:
						read();
						break;
					case 0:
						break;
					default:
						printf("\n!Invalid Choice!\n");
						break;
				}
				break;
			case 0:
				printf("\n!Thanks to use me!\n*Exit*\n");
				break;
			default:
				printf("\n!Invalid Choice!\n");
				break;
		}
	}while(ch!=0);
}
void create()
{
	FILE *p;
	void account(char []);
	int code();
	char id[20];
	int pin;
	account(id);
	p=fopen(id,"w");
	pin=code();
	putw(pin,p);
	fclose(p);
}
void account(char id[])
{
	int i;
	FILE *p;
	label:
	printf("\nEnter your mobile no\n");
	scanf("%s",id);
	for(i=0;id[i]!='\0';i++)
	{
		if(id[i]<48||id[i]>57)
		{
			printf("\n!Mobile number should only have digits!\n");
			goto label;
		}
	}
	if((strlen(id))!=10)
	{
		printf("\n!Mobile Number should be of 10 digits!\n");
		goto label;
	}
	printf("\n!ID successfully created!\nID is %s\n",id);
	strcat(id,".txt");
}
int code()
{
	int pin,conf;
	label:
	printf("\nCreate 4 digit Pin ");
	scanf("%d",&pin);
	if(pin>9999||pin<1000)
	{
		printf("\n!Enter only four digit pin!\n");
		goto label;
	}
	printf("\nRe-enter pin to confirm ");
	scanf("%d",&conf);
	if(pin!=conf)
	{
		printf("\n!Pin Mismatched!\n!Try Again!\n");
		goto label;
	}
	printf("\nPin Successfully Created\n");
	return(pin);
}
void write()
{
	FILE *p,*q;
	char id[20],ch;
	int pin,conf,i=1;
	label1:
	printf("\nEnter your ID\n");
	scanf("%s",id);
	strcat(id,".txt");
	if((p=fopen(id,"r"))==0)
	{
		printf("\n!Invalid Id!\n");
		goto label1;
	}
	pin=getw(p);
	label2:
	printf("Enter your pin ");
	scanf("%d",&conf);
	if(pin!=conf)
	{
		printf("\n!Pin didn't match!\n");
		goto label2;
	}
	q=fopen(id,"w");
	putw(pin,q);
	printf("\nType text from below\nPress ~ to exit\n");
	do
	{
		scanf("%c",&ch);
		if(ch!='~')
		{
			if(i%3==0)
			{
				ch-=5;
			}
			else if(i%2==0)
			{
				ch-=1;
			}
			else
			{
				ch+=3;
			}
			i++;
		}
		putc(ch,q);
	}while(ch!='~');
	fclose(p);
	fclose(q);
}
void read()
{
	FILE *p;
	char id[20],ch;
	int pin,conf,i=1;
	label:
	printf("\nEnter your ID\n");
	scanf("%s",id);
	strcat(id,".txt");
	if((p=fopen(id,"r"))==0)
	{
		printf("\n!ID is not valid!\n");
		goto label;
	}
	pin=getw(p);
	label1:
	printf("Enter your pin ");
	scanf("%d",&conf);
	if(pin!=conf)
	{
		printf("\n!Pin didn't match!\n");
		goto label1;
	}
	printf("\nYour Data\n");
	do
	{
		ch=getc(p);
		if(ch!='~')
		{
			if(i%3==0)
			{
				ch+=5;
			}
			else if(i%2==0)
			{
				ch+=1;
			}
			else
			{
				ch-=3;
			}
			i++;
			printf("%c",ch);
		}
	}while(ch!='~');
	printf("\n");
	fclose(p);
}