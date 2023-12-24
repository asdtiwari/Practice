//Print Pattern
//i=1<=n 1<=j<=n-i 1<=k<=i
/*
  1
 22
333*/
#include<stdio.h>
int main(void)
{
	int i,j,n;
	printf("\n Print Pattern \n");
	printf("\nEnter No. of Rows: ");
	scanf("%d",&n);//3
	for(i=1;i<=n;i++)// for i(3;<=3;+1)
	{
		for(j=1;j<=n-i;j++) //for j(1;<=3-3 "0";+1)
			printf(" ");
		for(j=1;j<=i;j++) //for j(1;<=3;+1)
			printf("%d",i);
		printf("\n");
	}
	return 0; 	 
}