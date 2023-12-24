/*WAP to multiply any two 3*3 matrices*/
/*Author: ASDT Date: January 23, 2023*/
//------------------------------------
#include<stdio.h>
//------------------------------------
void print(int arr[][3])
{
	register short i,j;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
			printf(" %d\t",arr[i][j]);
		printf("\n");
	}
	return;
}
//------------------------------------
int main(void)
{
	int arr1[3][3],arr2[3][3],multi[3][3];
	register short i,j,k;
	printf("\nMultiplication of Matrices\n");
	for(i=0;i<3;i++)
		for(j=0;j<3;j++)
		{
			printf("Enter Element Matrix1[%d][%d]: ",i,j);
			scanf("%d",&arr1[i][j]);
		}
	printf("\nData Stored Successfully\n");
	for(i=0;i<3;i++)
		for(j=0;j<3;j++)
		{
			printf("Enter Element Matrix2[%d][%d]: ",i,j);
			scanf("%d",&arr2[i][j]);
		}
	printf("\nData Stored Successfully\n");
	for(i=0;i<3;i++)
		for(j=0;j<3;j++)
		{
			multi[i][j]=0;
			for(k=0;k<3;k++)
				multi[i][j]=multi[i][j]+arr1[i][k]*arr2[k][j];
		}
	printf("\nMatrix1:\n");
	print(arr1);
	printf("\nMatrix2:\n");
	print(arr2);
	printf("\nMultiplication:\n");
	print(multi);
	return 0;
}
//------------------------------------