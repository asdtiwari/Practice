/*WAP OOPs based to manage the details of collage to illustrate the example of hierarchial inheritence*/
#include<iostream>
#include<stdio.h>
#include<conio.h>
using namespace std;
class College
{
	private:
		int id;
		char name[20],address[50];
	public:
		void inc()
		{
			cout<<"Enter follwing details of college\n";
			cout<<"College code\t";
			cin>>id;
			cout<<"College name\t";
			fflush(stdin);
			gets(name);
			cout<<"College address\t";
			fflush(stdin);
			gets(address);
		}
		void outc()
		{
			cout<<"\nInstitute Code\t"<<id<<"\nInstitute Name\t"<<name<<"\nInstitute Add.\t"<<address<<endl;
		}
};
class Student:public College
{
	private:
		int id;
		char name[20],subject[20];
	public:
		void ins()
		{
			cout<<"\nEnter the following details of Students\n";
			cout<<"ID\t";
			cin>>id;
			cout<<"Name\t";
			cin>>name;
			cout<<"Subject\t";
			cin>>subject;
		}
		void outs()
		{
			cout<<"\nID\t"<<id;
			cout<<"\nName\t"<<name;
			cout<<"\nSubject\t"<<subject;
		}
};
class Faculty:public College
{
	private:
		int id;
		char name[20],qualification[20];
	public:
		void inf()
		{
			cout<<"\nEnter the following details of Faculty\n";
			cout<<"ID\t";
			cin>>id;
			cout<<"Name\t";
			cin>>name;
			cout<<"Qual.\t";
			cin>>qualification;
		}
		void outf()
		{
			cout<<"\nID\t"<<id;
			cout<<"\nName\t"<<name;
			cout<<"\nQualif.\t"<<qualification;
		}
};
class Regular:public Student
{
	private:
		int theory,practical;
	public:
		void inr()
		{
			cout<<"\nMax Marks 250\n";
			cout<<"Theroy\t";
			cin>>theory;
			cout<<"Pract.\t";
			cin>>practical;
		}
		void outr()
		{
			cout<<"\nTheory\t"<<theory;
			cout<<"\nPract.\t"<<practical;
		}
};
class Private:public Student
{
	private:
		int theory;
	public:
		void inp()
		{
			cout<<"\nMax Marks 500\n";
			cout<<"Theory\t";
			cin>>theory;
		}
		void outp()
		{
			cout<<"\nTheory\t"<<theory;
		}
};
class Permanent:public Faculty
{
	private:
		int income,bond;
		char subject[10];
	public:
		void inp()
		{
			cout<<"Enter Salary\t";
			cin>>income;
			cout<<"Enter the year to bond\t";
			cin>>bond;
			cout<<"Enter Teaching Subject\t";
			cin>>subject;
		}
		void outp()
		{
			cout<<"\nSalary\t"<<income;
			cout<<"\nBond\t"<<bond;
			cout<<"\nSubject\t"<<subject;
		}
};
class Visiting:public Faculty
{
	private:
		int income,lecture;
		char topic[20];
	public:
		void inv()
		{
			cout<<"Enter Salary\t";
			cin>>income;
			cout<<"Enter no. of lecture\t";
			cin>>lecture;
			cout<<"Enter Teaching Topic\t";
			cin>>topic;
		}
		void outv()
		{
			cout<<"\nSalary\t"<<income;
			cout<<"\nLecture\t"<<lecture;
			cout<<"\nTopic\t"<<topic;
		}
};
int main()
{
	Permanent p[10];
	Visiting v[10];
	Regular r[10];
	Private s[10];
	int ch,a,i=0,j=0,k=0,l=0;
	do
	{
		cout<<"\nData Library\n";
		cout<<"\nChoose the section\n1. Enrollment\n2. Show Details\n3. Exit\t";
		cin>>ch;
		switch(ch)
		{
			case 1:
				cout<<"\n1. Faculty\n2. Student\n3. Exit\t";
				cin>>ch;
				switch(ch)
				{
					case 1:
						cout<<"\n1. Permanent\n2. Visiting\n3.Exit\t";
						cin>>ch;
						switch(ch)
						{
							case 1:
								p[i].inc();
								p[i].inf();
								p[i].inp();
								i++;
								break;
							case 2:
								v[j].inc();
								v[j].inf();
								v[j].inv();
								j++;
								break;
							case 3:
								cout<<"\nExit\n";
								break;
							default:
								cout<<"\nInvalid\n";
								break;
						}
						break;
					case 2:
						cout<<"\n1. Regular\n2. Private\n3.Exit\t";
						cin>>ch;
						switch(ch)
						{
							case 1:
								r[k].inc();
								r[k].ins();
								r[k].inr();
								k++;
								break;
							case 2:
								s[l].inc();
								s[l].ins();
								s[l].inp();
								l++;
								break;
							case 3:
								cout<<"\nExit\n";
								break;
							default:
								cout<<"\nInvalid\n";
								break;
						}
						break;
					case 3:
						cout<<"\nExit\n";
						break;
					default:
						cout<<"\nInvalid\n";
						break;
				}
				break;
			case 2:
				cout<<"\n1. Faculty\n2. Student\n3. Exit\t";
				cin>>ch;
				switch(ch)
				{
					case 1:
						cout<<"\n1. Permanent\n2. Visiting\n3. Exit\t";
						cin>>ch;
						switch(ch)
						{
							case 1:
								for(a=0;a<i;a++)
								{
									p[a].outc();
									p[a].outf();
									p[a].outp();
									cout<<endl;
								}
								break;
							case 2:
								for(a=0;a<j;a++)
								{
									v[a].outc();
									v[a].outf();
									v[a].outv();
									cout<<endl;
								}
								break;
							case 3:
								cout<<"\nExit\n";
								break;
							default:
								cout<<"\nInvalid\n";
								break;
						}
						break;
					case 2:
						cout<<"\n1. Regular\n2. Private\n3.Exit\t";
						cin>>ch;
						switch(ch)
						{
							case 1:
								for(a=0;a<k;a++)
								{
									r[a].outc();
									r[a].outs();
									r[a].outr();
									cout<<endl;
								}
								break;
							case 2:
								for(a=0;a<l;a++)
								{
									s[a].outc();
									s[a].outs();
									s[a].outp();
									cout<<endl;
								}
								break;
							case 3:
								cout<<"\nExit\n";
								break;
							default:
								cout<<"\nInvalid\n";
								break;
						}
						break;
					case 3:
						cout<<"\nExit\n";
						break;
					default:
						cout<<"\nInvalid\n";
						break;
				}
				break;
			case 3:
				cout<<"\nExit\n";
				break;
			default:
				cout<<"\nInvalid\n";
				break;
		}
	}while(ch!=3);
}