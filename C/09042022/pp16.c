/*print pattern
    *
   * *
  *   *
 *     *
* * * * *	*/

#include<stdio.h>
void main()
{
	int i,j,k;
	for(i=1;i<=5;i++)
	{
		if(i<5)
		{
			for(j=1;j<=5-i;j++)
			{
				printf(" ");
			}
			for(k=1;k<=i;k++)
			{
				if(k==1||k==i)
				{
					printf("* ");
				}
				else
				{
					printf("  ");
				}
			}
		}
		else
		{
			for(j=1;j<=5;j++)
			{
				printf("* ");
			}
		}
		printf("\n");
	}
}