/*Write a C Program to input month number and print number of days in that month*/
#include<stdio.h>
void main()
{
	int a;
	printf("Enter the month number");
	scanf("%d",&a);
	if(a>=1&&a<=12)
	{
		if(a==1||a==3||a==5||a==7||a==8||a==10||a==12)
		{
			printf("31 days");
		}
		else if(a==2)
		{
			printf("28 days or 29 days");
		}
		else
		{
			printf("30 days");
		}
	}
	else
	{
		printf("Invalid Input");
	}
}