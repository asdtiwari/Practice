//find the largest among three number
#include<stdio.h>
void main()
{
	int a,b,c;
	printf("Give value of a, b and c to know the largest one ");
	scanf("%d%d%d",&a,&b,&c);
	if (a>b && a>c)
	{
		printf("a is largest");
	}
	if (b>a && b>c)
	{
		printf("b is largest");
	}
	if (c>a && c>b)
	{
		printf("c is largest");
	}
}