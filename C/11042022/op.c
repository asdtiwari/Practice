/*sum of digits of a given integers*/
#include<stdio.h>
void main()
{
	int h,i,j,k=0;
	printf("Enter a number to add it's digits ");
	scanf("%d",&i);
	h=i;
	while(i>0)
	{
		j=i%10;
		k=k+j;
		i=i/10;
	}
	printf("Sum of digits of %d is %d",h,k);
}