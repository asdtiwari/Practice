/* print pattern
A A A A A
B       B
C       C
D       D
E E E E E	*/

#include<stdio.h>
void main()
{
	int i,j;
	for(i=65;i<=69;i++)
	{
		for(j=1;j<=5;j++)
		{
			if(i==65||i==69)
			{
				printf("%c ",i);
			}
			else
			{
				if(j==1||j==5)
				{
					printf("%c ",i);
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