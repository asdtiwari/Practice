/*Write a C program to find given number is even or odd by using switch case*/
#include<stdio.h>
void main()
{
	int a;
	printf("Enter a Number");
	scanf("%d",&a);
	switch(a%2)
	{
		case 0:
			printf("%d is even",a);
			break;
		default:
			printf("%d is odd",a);
			break;
	}
}