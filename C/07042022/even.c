//print even number between 0-20
#include<stdio.h>
void main()
{
	int i;
	for(i=1;i<=20;i++)
	{
		if(i%2==0)
		{
			printf("%d\t",i);
		}
	}
}