/*print pattern
*       *
**     **
***   ***
**** ****
*********	*/

#include<stdio.h>
void main()
{
	int i,j,k;
	for (i=1;i<=5;i++)
	{
		for(k=1;k<=9;k++)
		{
			if(k<=i||k>=10-i)
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}
}