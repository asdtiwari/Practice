/*Write a C program to find given number is even or odd*/
#include<stdio.h>
void main()
{
	int a;
	printf("Enter a Number");
	scanf("%d",&a);
	if(a%2==0)
	{
		printf("%d is even",a);
	}
	else
	{
		printf("%d is odd",a);
	}
}