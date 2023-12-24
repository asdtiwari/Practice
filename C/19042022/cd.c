//Program to count the number of digits
#include<stdio.h>
void main()
{
	int a,s=0;
	printf("Enter the number ");
	scanf("%d",&a);
	do
	{
		s+=1;
		a/=10;
	}while(a>0);
	printf("%d digits",s);
}