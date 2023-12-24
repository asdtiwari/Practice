/*print pattern
*****
 ****
  ***
   **
    *
   **
  ***
 ****
*****	*/

#include<stdio.h>
void main()
{
	int i,j,k;
	for(i=1;i<=9;i++)
	{
		if(i<6)
		{
			for(j=1;j<=i-1;j++)
			{
				printf(" ");
			}
			for(k=1;k<=6-i;k++)
			{
				printf("*");
			}
		}
		else
		{
			for(j=1;j<=9-i;j++)
			{
				printf(" ");
			}
			for(k=1;k<=i-4;k++)
			{
				printf("*");
			}
		}
		printf("\n");
	}
}