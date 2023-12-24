/* Print Pattern
1 1 1 1 1
2 2 2 2 2
3 3 3 3 3
4 4 4 4 4
5 5 5 5 5	*/
#include<stdio.h>
int main(void)
{
	int i,j,n;
	printf("\n Print Pattern \n");
	printf("\nNo. of rows: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
			printf(" %d ",i);
		printf("\n");
	}
	return 0;
}