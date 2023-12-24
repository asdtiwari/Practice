/*WAP to pick up the largest number from a 5 row by 5 column matrix.*/
/*Author: ASDT Date: January 23, 2023*/
//------------------------------------
#include<stdio.h>
//------------------------------------
int main(void)
{
	int arr[5][5],small;
	register short i,j;
	printf("\nEnter 25 Elements in array\n");
	for(i=0;i<5;i++)
		for(j=0;j<5;j++)
		{
			printf("Enter element arr[%hd][%hd]: ",i,j);
			scanf("%d",&arr[i][j]);
		}
	small=arr[0][0];
	printf("\nGiven Data:\n");
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			printf(" %d\t",*(*(arr+i)+j));
			if(small>arr[i][j])
				small=arr[i][j];
		}
		printf("\n");
	}
	printf("\nSmallest Element is %d \n",small);
	return 0;
}
//------------------------------------