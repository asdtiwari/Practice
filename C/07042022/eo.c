//print number 1 to 10's calculation  sum of even and sum of odd number
#include<stdio.h>
void main()
{
	int i,e=0,o=0;
	for (i=1;i<=10;i++)
	{
		if(i%2==0)
		{
			e=e+i;
		}
		else
		{
			o=o+i;
		}
	}
	printf("Sum of Even is %d\n",e);
	printf("Sum of Odd is %d\n",o);
}