/*Write a C program to find maximum between two numbers by using switch case*/
#include<stdio.h>
void main()
{
	int a,b;
	printf("Enter the two numbers");
	scanf("%d%d",&a,&b);
	switch(a>b)
	{
		case 1:
			printf("%d is greater",a);
			break;
		default:
			printf("%d is greater",b);
			break;
	}
}