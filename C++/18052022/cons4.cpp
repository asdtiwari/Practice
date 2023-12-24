/*WAP OOPs based to store the data of student by using parametric constructor*/
#include<iostream>
#include<string.h>
using namespace std;
class Student
{
	private:
		int RollNo,Marks;
		char Name[10];
	public:
		Student(int rno,char n[],int ma)
		{
			RollNo=rno;
			strcpy(Name,n);
			Marks=ma;
		}
		void out()
		{
			cout<<"\nRollNo\t"<<RollNo;
			cout<<"\nName\t"<<Name;
			cout<<"\nMarks\t"<<Marks;
		}
};
int main()
{
	Student S1(101,"Akhil",440);
	S1.out();
	Student S2(102,"Anil",450);
	S2.out();
}