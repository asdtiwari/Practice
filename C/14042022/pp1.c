/*print pattern
*        *
**      **
***    ***
****  ****
**********
**********
****  ****
***    ***
**      **
*        *	*/

#include<stdio.h>
void main()
{
	int i,j;
	for(i=1;i<=10;i++)
	{
		if(i==5||i==6)
		{
			for(j=1;j<=10;j++)
			{
				printf("*");
			}
		}
		else if(i<5)
		{
			for(j=1;j<=10;j++)
			{
				if(j<=i||j>=11-i)
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
			for(j=1;j<=10;j++)
			{
				if(j>=i||j<=11-i)
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