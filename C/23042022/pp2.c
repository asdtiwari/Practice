/*print pattern
5
4 4
3 3 3
2 2 2 2
1 1 1 1 1	*/
#include<stdio.h>
void main()
{
	int i,j;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d ",6-i);
		}
		printf("\n");
	}
}