/*print pattern
1 2 3 4 5
1       5
1       5
1       5
1 2 3 4 5	*/

#include<stdio.h>
void main()
{
	int i,k;
	for(i=1;i<=5;i++)
	{
		for (k=1;k<=5;k++)
		{
			if(i==1||i==5)
			{
				printf("%d ",k);
			}
			else
			{
				if(k==1||k==5)
				{
					printf("%d ",k);
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