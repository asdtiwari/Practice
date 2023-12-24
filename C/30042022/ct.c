/*write a C program to check whether the triangle is equilateral, isosceles or scalene*/
#include<stdio.h>
void main()
{
	float a,s,d;
	printf("Enter the all three sides of triangle");
	scanf("%f%f%f",&a,&s,&d);
	if(a+s>=d&&a+d>=s&&s+d>a)
	{
		if(a==s&&a==d)
		{
			printf("Triangle is equilateral");
		}
		else if(a==s&&a!=d||a==d&&a!=s||s==d&&s!=a)
		{
			printf("Triangle is isosceles");		
		}
		else
		{
			printf("Triangle is scalene");
		}
	}
	else
	{
		printf("Invalid triangle");
	}
}