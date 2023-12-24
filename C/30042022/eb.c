/*Write a C program to input electricity unit charges and calculate total electricity bill according to given point:
for first 50 units Rs. 0.50/unit
for next 100 units Rs. 0.75/unit
for next 100 units Rs. 1.20/unit
for unit above 250 Rs. 1.50/unit
An additonal surcharge of 20% is added to bill.	*/
#include<stdio.h>
void main()
{
	float i,r,t;
	printf("Enter the electricity unit ");
	scanf("%f",&i);
	if(i<=50)
	{
		r=i*0.50;
		t=r*20/100;
		printf("Rs %.2f",t);
	}
	else if(i>50&&i<=150)
	{
		r=i*0.75;
		t=r*20/100;
		printf("Rs %.2f",t);
	}
	else if(i>150&&i<=250)
	{
		r=i*1.20;
		t=r*20/100;
		printf("Rs %.2f",t);
	}
	else
	{
		r=i*1.50;
		t=r*20/100;
		printf("Rs %.2f",t);
	}
}
