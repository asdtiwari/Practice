/* Print Pattern
A B C D E
A B C D E
A B C D E
A B C D E
A B C D E	*/
#include<stdio.h>
int main(void)
{
	//i: Outer Loop, Row; j: Inner Loop, column; n: row;
	int i,j,n;
	printf("\n Print Pattern \n");
	printf("\nEnter No. of Rows: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j='A';j<'A'+n;j++)
			printf(" %c ",j);
		printf("\n");
	}
	return 0;
}