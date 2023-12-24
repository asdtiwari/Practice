/*write a C program to input all side of a triangle and check wheather triangle is valid or not*/
#include<stdio.h>
void main()
{
	float a,s,d;
	printf("Enter the all three sides of triangle");
	scanf("%f%f%f",&a,&s,&d);
	if(a+s>=d&&a+d>=s&&s+d>=a)
	{
		printf("Triangle is valid");
	}
	else
	{
		printf("Triangle is not valid");		
	}
}