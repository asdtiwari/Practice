/*WAP to obtain transpose of a matrix 3*5 matrix. The transpose of a matrix is obtained by exchanging the elements of each row with the elements of the corresponding column*/
/*Author: ASDT Date: January 23, 2023*/
//------------------------------------
#include<stdio.h>
//------------------------------------
int main(void)
{
	register short i,j,row=3,column=5;
	int arr[row][column];
	printf("\nTranspose\n");
	for(i=0;i<row;i++)
		for(j=0;j<column;j++)
		{
			printf("\nEnter arr1[%hd][%hd]: ",i,j);
			scanf("%d",&arr[i][j]);
		}
	printf("\nGiven Data: \n");
	for(i=0;i<row;i++)
	{
		for(j=0;j<column;j++)
			printf(" %d\t",arr[i][j]);
		printf("\n");
	}
	printf("\nTranspose Data: \n");
	for(i=0;i<column;i++)
	{
		for(j=0;j<row;j++)
			printf(" %d\t",arr[j][i]);
		printf("\n");
	}
	return 0;
}
//------------------------------------