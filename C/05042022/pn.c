//check positive or negative
#include<stdio.h>
void main()
{
	int i;
	printf("Enter an integer to know wheather it is positive or negative ");
	scanf("%d",&i);
	if(i>0)
	{
		printf("%d is positive",i);
	}
	else
	{
		printf("%d is negative",i);
	}
}