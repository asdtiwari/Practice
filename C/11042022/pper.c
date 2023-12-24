//print the perfect number upto 999999
#include<stdio.h>
void main()
{
	int i,j,s;
	for(i=1;i<=999999;i++)
	{
		s=0;
		for(j=i-1;j>0;j--)
		{
			if(i%j==0)
			{
				s=s+j;
			}
		}
		if(s==i)
		{
			printf("%d\t",i);
		}
	}
}