/*print pattern
 * * * * 
*       * 
 *     *
  *   *
   * *
    *	*/

#include<stdio.h>
void main()
{
	int i,j,k;
	for(i=1;i<=6;i++)
	{
		if(i<2)
		{
			for(j=1;j<=4;j++)
			{
				printf(" *");	
			}
		}
		else
		{
			for(j=1;j<i-1;j++)
			{
				printf(" ");
			}
			for(k=1;k<=5;k++)
			{
				if(k==1||k==7-i)
				{
					printf("* ");
				}
				else
				{
					printf("  ");
				}
			}
		}
		printf("\n");
	}
}