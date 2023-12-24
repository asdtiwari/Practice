/*Write a C program to find given number is negative positive or zero*/
#include<stdio.h>
void main()
{
	int a;
	printf("Enter a Number");
	scanf("%d",&a);
	if(a>0)
	{
		printf("%d is positive",a);
	}
	else if(a<0)
	{
		printf("%d is negative",a);
	}
	else
	{
		printf("%d is zero",a);
	}
}