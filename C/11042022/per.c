//check wheather the given integer is perfect or not perfect
#include<stdio.h>
void main()
{
	int h,i,j,k=0;
	printf("Enter a number to know wheather it's perfect or not ");
	scanf("%d",&i);
	h=i-1;
	while(h>0)
	{
		if(i%h==0)
		{
			k=k+h;
		}
		h--;
	}
	if(k==i)
	{
		printf("%d is perfect",i);
	}
	else
	{
		printf("%d is not perfect",i);
	}
}