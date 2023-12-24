/*WAP to manage the books details by using to append to add and to read mode of file handling*/
#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;
class Book
{
	private:
		int code,price;
		char name[20];
	public:
		void input()
		{
			cout<<"\nEnter the following details of book:";
			cout<<"\nBook Code, Name and Price\n";
			cin>>code>>name>>price;
		}
		void show()
		{
			cout<<endl<<code<<"\t"<<name;
			if((strlen(name))<8)
			{
				cout<<"\t\t\t";
			}
			else if((strlen(name))<16)
			{
				cout<<"\t\t";
			}
			else
			{
				cout<<"\t";
			}
			cout<<price<<endl;
		}
		int Code()
		{
			return(code);
		}
		int Price()
		{
			return(price);
		}
};
int main()
{
	fstream task;
	Book book;	
	int choice,price,code,flag,search,total;
	do
	{
		cout<<"\n=================================";
		cout<<"\nWelcome to Book Management System\n";
		cout<<"---------------------------------";
		cout<<"\n1. Save Details\n2. Show all\n3. Search Book\n4. Total Amount\n0. Exit\t";
		cin>>choice;
		switch(choice)
		{
			case 1:
				task.open("Book.txt",ios::out|ios::app);
				book.input();
				task.write((char*)&book,sizeof(book));
				cout<<"\nData Saved Successfully\n";
				task.close();
				break;
			case 2:
				cout<<"\nCode\tName\t\t\tPrice\n";
				task.open("Book.txt",ios::in);
				while(task.read((char*)&book,sizeof(book)))
				{
					book.show();
				}
				task.close();
				break;
			case 3:
				flag=0;
				task.open("Book.txt",ios::in);
				cout<<endl<<"Enter the book code to search ";
				cin>>search;
				while(task.read((char*)&book,sizeof(book)))
				{
					code=book.Code();
					if(search==code)
					{
						cout<<"\nData found\n";
						cout<<"\nCode\tName\t\t\tPrice\n";
						book.show();
						flag=1;
					}
				}
				if(flag==0)
				{
					cout<<"\nData not found\n";
				}
				task.close();
				break;
			case 4:
				total=0;
				task.open("Book.txt",ios::in);
				while(task.read((char*)&book,sizeof(book)))
				{
					price=book.Price();
					total+=price;
				}
				cout<<"\nAmount of all book is "<<total<<endl;
				task.close();
				break;
			case 0:
				cout<<"\nThanks\nExit\n";
				break;
		}
	}while(choice!=0);
}