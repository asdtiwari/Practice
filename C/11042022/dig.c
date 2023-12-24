//count the digits of number
#include<stdio.h>
void main()
{
	int h,i,k=0;
	printf("Enter a number to count it's digits ");
	scanf("%d",&h);
	i=h;
	while(i>0)
	{
		k=k+1;
		i=i/10;
	}
	printf("%d has %d digits",h,k);
}