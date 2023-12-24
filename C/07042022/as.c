//sum and average of 1-10
#include<stdio.h>
void main()
{
	int i,s=0,a;
	for(i=1;i<=10;i++)
	{
		s=s+i;
	}
	a=s/10;
	printf("Sum of 1 to 10 is %d\n",s);
	printf("Average of 1 to 10 is %d",a);
}