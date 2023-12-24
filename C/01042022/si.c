//calculate simple intrest
#include<stdio.h>
void main()
{
	float p,r,t,si;
	printf("Enter Principal ");
	scanf("%f",&p);
	printf("Enter Rate ");
	scanf("%f",&r);
	printf("Enter Yearly Time ");
	scanf("%f",&t);
	si=(p*r*t)/100;
	printf("Simple Interest = %.2f",si);
}
