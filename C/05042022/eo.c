//check even or odd
#include<stdio.h>
void main()
{
	int i;
	printf("Enter an integer to know wheather it is even or odd ");
	scanf("%d",&i);
	if(i%2==0)
	{
		printf("%d is even",i);
	}
	else
	{
		printf("%d is odd",i);
	}
}