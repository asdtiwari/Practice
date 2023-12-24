/*WAP to add two 6*6 matrices*/
/*Author: ASDT Date: January 23, 2023*/
//-------------------------------------
#include<stdio.h>
//-------------------------------------
void print(int arr[][6])
{
	register short i,j;
	for(i=0;i<6;i++)
	{
		for(j=0;j<6;j++)
			printf(" %d\t",arr[i][j]);
		printf("\n");
	}
}
//-------------------------------------
int main(void)
{
    int arr1[6][6],arr2[6][6],sum[6][6];
    register short i,j;
    printf("\nAddition of 6*6 Matrix\n");
    for(i=0;i<6;i++)
        for(j=0;j<6;j++)
        {
            printf("Array1[%d][%d]: ",i,j);
            scanf("%d",&arr1[i][j]);
        }
    printf("\nData Stored Successfully\n");
    for(i=0;i<6;i++)
        for(j=0;j<6;j++)
        {
            printf("Array2[%d][%d]: ",i,j);
            scanf("%d",&arr2[i][j]);
            sum[i][j]=arr1[i][j]+arr2[i][j];
        }
    printf("\nData Stored Successfully \n");
    printf("\nArray 1:\n");
    print(arr1);
    printf("\nArray 2:\n");
    print(arr2);
    printf("\nSum:\n");
    print(sum);
    return 0;
}
//-------------------------------------