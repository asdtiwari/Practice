/*Write a C program to check wheather the given year is leap or not*/
#include<stdio.h>
void main()
{
	int a;
	printf("Enter year");
	scanf("%d",&a);
	if(a%4==0&&a%100!=0)
	{
		printf("%d is leap year",a);
	}
	else if(a%4==0&&a%100==0&&a%400==0)
	{
		printf("%d is leap year",a);
	}
	else
	{
		printf("%d isn't leap year",a);
	}
}