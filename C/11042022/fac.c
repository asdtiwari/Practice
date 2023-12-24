//Calculate factorial
#include<stdio.h>
void main()
{
	int h,i,k=1;
	printf("Enter a number to calculate it's factorial ");
	scanf("%d",&i);
	h=i;
	while(i>0)
	{
		k=k*i;
		i--;
	}
	printf("Factorial of %d is %d",h,k);
}
