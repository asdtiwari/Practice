/*Print number from 1 to 100 skip the number which is divisible by 3 and 5*/
#include<stdio.h>
void main()
{
	int i;
	for(i=0;i<=100;i++)
	{
		if(i%3!=0&&i%5!=0)
		{
			printf("%d\n",i);
		}
	}
}