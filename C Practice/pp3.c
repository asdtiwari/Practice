/* 1<=i<=n	column1		column2	n=5
 1  2  3  4  5 space=0	i(1)-1	print=5	n(5)-i(1)+1
  1  2  3  4	1	i(2)-1	4	n(5)-i(2)+1
   1  2  3	2	i(3)-1	3
    1  2	3		2
     1 		4	i(5)-1	1	n(5)-i(5)+1	*/
#include<stdio.h>
int main(void)
{
	int i,j,n;
	printf("\n Print Pattern \n");
	printf("\nEnter No. of Rows: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i-1;j++)
			printf("   ");
		for(j=1;j<=n-i+1;j++)
			printf(" %d ",j);
		printf("\n");
	}
	return 0;
}