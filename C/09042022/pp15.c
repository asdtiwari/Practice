/*print pattern
    *
   * *
  * * *
 * * * *
* * * * *
 * * * *
  * * *
   * *
    *	*/

#include<stdio.h>
void main()
{
	int i,j,k;
	for(i=1;i<=9;i++)
	{
		if(i<6)
		{
			for(j=1;j<=5-i;j++)
			{
				printf(" ");
			}
			for(k=1;k<=i;k++)
			{
				printf("* ");
			}
		}
		else
		{
			for(j=1;j<=i-5;j++)
			{
				printf(" ");
			}
			for(k=1;k<=10-i;k++)
			{
				printf("* ");
			}
		}
		printf("\n");
	}
}