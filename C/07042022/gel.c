//program to check the greatest among three number with the help of nested if-else
#include<stdio.h>
void main()
{
	int a,b,c;
	printf("Enter the value of a, b and c ");
	scanf("%d%d%d",&a,&b,&c);
	if(a>b)
	{
		if (a>c)
		{
			printf("a is greatest");
		}
		else
		{
			printf("c is greatest");
		}
	}
	else
	{
		if (b>c)
		{
			printf("b is greatest");
		}
		else
		{
			printf("c is greatest");
		}
	}
}