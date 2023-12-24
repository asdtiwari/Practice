/*Write a C program to input basic salary of an employee and calculate its Gross salary according to following:
BS<=10000:HRA=20% DA=80%
BS<=20000:HRA=25% DA=90%
BS>20000:HRA=30% DA=95%	*/
#include<stdio.h>
void main()
{
	float b,g,h,d;
	printf("Enter Basic Salary ");
	scanf("%f",&b);
	if(b<=10000)
	{
		h=(b*20)/100;
		d=(b*80)/100;
		g=b+h+d;
		printf("Basic Salary %.2f\nHouse Rent Allowance %.2f\nDearness Allowance %.2f\nGross Salary %.2f",b,h,d,g);
	}
	else if(b<=20000)
	{
		h=(b*25)/100;
		d=(b*90)/100;
		g=b+h+d;
		printf("Basic Salary %.2f\nHouse Rent Allowance %.2f\nDearness Allowance %.2f\nGross Salary %.2f",b,h,d,g);
	}
	else
	{
		h=(b*30)/100;
		d=(b*95)/100;
		g=b+h+d;
		printf("Basic Salary %.2f\nHouse Rent Allowance %.2f\nDearness Allowance %.2f\nGross Salary %.2f",b,h,d,g);
	}
}