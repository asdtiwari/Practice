//print palindrom number from 101 to 200
#include<stdio.h>
void main()
{
	int i;
	for(i=101;i<=200;i++)
	{
		if(i/100==i%10)
		{
			printf("%d\t",i);
		}
	}
}