/*		column1 1<=i<=n		column2
    * 		space=4 <=n-i 		print=1	<=i
   * * 		space=3			print=2
  * * *		space=2			print=3
 * * * *	space=1
* * * * *	space=0			print=5
 * * * *	space=1 n<i<=2n-1	print=4	<=2*n-i
  * * *		space=2	i-n	
   * *		space=3			print=2
    *		space=4			print=1			*/
#include<stdio.h>
int main(void)
{
	int i,j,n;
	printf("\n Print Pattern \n");
	printf("\nEnter No. of Rows: ");
	scanf("%d",&n);
	for(i=1;i<=2*n-1;i++)
	{
		if(i<=5)
		{
			for(j=1;j<=n-i;j++)
				printf(" ");
			for(j=1;j<=i;j++)
				printf("* ");
		}
		else
		{
			for(j=1;j<=i-n;j++)
				printf(" ");
			for(j=1;j<=2*n-i;j++)
				printf("* ");
		}
		printf("\n");
	}
	return 0;
}