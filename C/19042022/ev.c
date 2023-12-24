//Program to print even number upto 20 by using do while
#include<stdio.h>
void main()
{
	int a=1;
	do
	{
		if(a%2==0)
		{
			printf("%d\t",a);
		}
		a++;
	}while(a<=20);
}