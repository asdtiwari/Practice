/*Program to calculate gross salary and net salary. Accept basic salary from user, TA (Travel Allowance) i.e. 10% of basic salary, PF (Provident Fund) i.e. 7.8% of basic, DA (Dearness Allowance) is 500.*/
#include<stdio.h>
void main()
{
	float b,t,p,d,g,n;
	printf("Enter your basic salary\n\t");
	scanf("%f",&b);
	t=(b*10)/100.00;
	p=(b*7.5)/100.00;
	d==500;
	g=b+d+t;
	n=g-p;
	printf("When Basic Salary is %.2f \nWhere 10 percent is Travel Allowance of Basic Salary i.e. %.2f \nAnd 7.8 percent is Provident Fund of Basic Salary i.e. %.2f \nAlso 500 is Dearness Allowance \nThen \n\tGross income will be %.2f\n\tNet income will be %.2f",b,t,p,g,n);
}