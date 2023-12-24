/*Write a C program to find the given number is divisible by 11 and 5 or not*/
#include<stdio.h>
void main()
{
	int a;
	printf("Enter a Number");
	scanf("%d",&a);
	if(a%11==0&&a%5==0)
	{
		printf("%d is divisible by 11 and 5",a);
	}
	else
	{
		printf("%d isn't divisible by 11 and 5",a);
	}
}