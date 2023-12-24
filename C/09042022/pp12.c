/*print pattern
1 2 3 4 5
 1 2 3 4
  1 2 3
   1 2
    1	*/

#include<stdio.h>
void main()
{
	int i,j,k;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<i;j++)
		{
			printf(" ");
		}
		for(k=1;k<=6-i;k++)
		{
			printf("%d ",k);
		}
		printf("\n");
	}
}