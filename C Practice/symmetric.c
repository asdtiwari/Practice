/*WAP to find if a square matrix is symmetric.*/
/*Author: ASDT Date: January 23, 2023*/
//-----------------------------------
#include<stdio.h>
//-----------------------------------
int main(void)
{
	auto short size,i,j,flag=0;
	printf("\nEnter size of square matrix: ");
	scanf("%hd",&size);
	int arr[size][size];
	printf("\n *** Square matrix created successfully *** \n");
	for(i=0;i<size;i++)
		for(j=0;j<size;j++)
		{
			printf("Enter arr[%d][%d]: ",i,j);
			scanf("%d",&arr[i][j]);
		}
	printf("\nArray: \n");
	for(i=0;i<size;i++)
	{
		for(j=0;j<size;j++)
		{
			printf(" %d\t",arr[i][j]);
			if(arr[i][j]==arr[j][i])
				flag++;
		}
		printf("\n");
	}
	if(flag==size*size)
		printf("\n ! Symmetric Matrix ! \n");
	else
		printf("\n ! Not a Symmetric Matrix ! \n");
	return 0;
}
//-----------------------------------