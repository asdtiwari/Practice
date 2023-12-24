/*Write a program to input marks of five subjects Phtsics, Chemmistry, Biology, Mathematics and Computer. Calculate percentage and grade according to following:
%>=90: Grade A
%>=80: Grade B
%>=70: Grade C
%>=60: Grade D
%>=40: Grade E
%<40: Grade F	*/
#include<stdio.h>
void main()
{
	float p,c,b,m,cm,t,pp;
	printf("Enter the marks of subjects\nMax Mark 100\n");
	printf("Physics ");
	scanf("%f",&p);
	printf("Chemistry ");
	scanf("%f",&c);
	printf("Biology ");
	scanf("%f",&b);
	printf("Mathematics ");
	scanf("%f",&m);
	printf("Computer ");
	scanf("%f",&cm);
	t=p+c+b+m+cm;
	pp=t/5;
	printf("\nTotal Marks is %.2f\nPercentage is %.2f\n",t,pp);
	if(pp>=90)
	{
		printf("Grade A");
	}
	else if(pp>=80)
	{
		printf("Grade B");
	}
	else if(pp>=70)
	{
		printf("Grade C");
	}
	else if(pp>=60)
	{
	 	printf("Grade D");
	}
	else if(pp>=40)
	{
		printf("Grade E");
	}
	else
	{
		printf("Grade F");
	}
}