//compare two numbers
#include<stdio.h>
void main()
{
	int a,b;
	printf("Give the value of a and b to compare ");
	scanf("%d%d",&a,&b);
	if (a>b)
	{
		printf("a is greater than b");
	}
	if (a<b)
	{
		printf("b is greater than a");
	}
	if (a==b)
	{
		printf("Both a and b are same");
	}
}