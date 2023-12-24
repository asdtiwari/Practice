/*write a C program to input angles of a triangle and check wheather triangle is valid or not*/
#include<stdio.h>
void main()
{
	float a,s,d;
	printf("Enter the all three angles of triangle in degree");
	scanf("%f%f%f",&a,&s,&d);
	if(a+s+d==180.00)
	{
		printf("Triangle is valid");
	}
	else
	{
		printf("Triangle is not valid");		
	}
}