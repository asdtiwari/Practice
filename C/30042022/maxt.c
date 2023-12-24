/*Write a C program to find maximum between two numbers*/
#include<stdio.h>
void main()
{
	int a,b;
	printf("Enter the two numbers");
	scanf("%d%d",&a,&b);
	if(a>b)
	{
		printf("%d is greater",a);
	}
	else if(a==b)
	{
		printf("%d %d are equal",a,b);
	}
	else
	{
		printf("%d is greater",b);
	}
}