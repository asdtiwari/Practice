/*print pattern
* * * * *
 *     *
  *   *
   * *
    *	*/

#include<stdio.h>
void main()
{
	int i,j,k;
	for(i=1;i<=5;i++) 
	{
		if(i<=1)
		{
			for(k=1;k<=5;k++) 
			{
				printf("* ");
			} 
		}
		else
		{
			for(k=1;k<i;k++)
			{
				printf(" ");
			}
			for (j=1;j<=6-i;j++)
			{
				if(j==1||j==6-i)
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