/*Print pattern
***** *****
****   ****
***     ***
**       **
*         *
**       **
***     ***
****   ****
***** *****	*/
#include<stdio.h>
void main()
{
	int i,j;
	for(i=1;i<=9;i++)
	{
		if(i<6)
		{
			for(j=1;j<=11;j++)
			{
				if(j<=6-i||j>=6+i)
				{
					printf("*");
				}
				else
				{
					printf(" ");
				}
			}
		}
		else
		{
			for(j=1;j<=11;j++)
			{
				if(j<=i-4||j>=16-i)
				{
					printf("*");
				}
				else
				{
					printf(" ");
				}
			}
		}
		printf("\n");
	}
}