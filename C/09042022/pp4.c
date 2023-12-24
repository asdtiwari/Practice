/*print pattern
ABCDE
ABCDE
ABCDE
ABCDE
ABCDE*/

#include<stdio.h>
void main()
{
	int i,j;
	for (i=1;i<=5;i++)
	{
		for(j=65;j<=69;j++)
		{
			printf("%c",j);
		}
		printf("\n");
	}
}
