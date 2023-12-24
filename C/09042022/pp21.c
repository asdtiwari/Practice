/*print pattern
A B C D E
A       E
A       E
A       E
A B C D E	*/

#include<stdio.h>
void main()
{
	int i,j;
	for(i=1;i<=5;i++)
	{
		for(j=65;j<=69;j++)
		{
			if(i==1||i==5)
			{
				printf("%c ",j);
			}
			else
			{
				if(j==65||j==69)
				{
					printf("%c ",j);
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