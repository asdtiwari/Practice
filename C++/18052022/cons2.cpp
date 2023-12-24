/*WAP OOPs based to store the data of student by using default constructor*/
#include<iostream>
#include<string.h>
using namespace std;
class Student
{
	private:
		int RollNo,Marks;
		char Name[10];
	public:
		Student()
		{
			RollNo=101;
			strcpy(Name,"Akhilesh");
			Marks=440;
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
	Student S1,S2;
	S1.out();
	S2.out();
}