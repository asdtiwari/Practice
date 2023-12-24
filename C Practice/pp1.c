//	Print Pattern
//	1<=j<=n-i+1
#include<stdio.h>
int main(void)
{
	int i,j,n;
	printf("\n Print Pattern \n");
	printf("\nEnter No. of Rows: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n-i+1;j++)
			printf(" %d ",j);
		printf("\n");
	}
	return 0;
}