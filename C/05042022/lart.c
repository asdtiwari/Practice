//find the largest among two number
#include<stdio.h>
void main()
{
	int a,b;
	printf("Enter value of a and b ");
	scanf("%d%d",&a,&b);
	if(a>b)
	{
		printf("a=%d is largest",a);
	}
	else
	{
		printf("b=%d is largest",b);
	}
}