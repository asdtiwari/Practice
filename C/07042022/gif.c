//program to check the greatest among three number with the help of nested if
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
		if (a<c)
		{
			printf("c is greatest");
		}
	}
	if (b>a)
	{
		if (b>c)
		{
			printf("b is greatest");
		}
		if(c>b)
		{
			printf("c is greatest");
		}
	}
}