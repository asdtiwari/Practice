/*Given an array p[5], write a function to shift it circularly left by two positions, This, if the original array is {15,30,28,19,61} then after shifting it will be {28,19,61,15,30} Call this function for a 4*5 matrix and get ita row left shifted.*/
/*Author: ASDT Date: January 23, 2023*/
//--------------------------------------
#include<stdio.h>
//--------------------------------------
void shift(int arr[], int size,int time)
{
    register short i,j,temp;
    for(i=0;i<time;i++)
    {
        for(j=0;j<size-1;j++)
        {
            temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
        }
    }
    return;
}
//--------------------------------------
int main()
{
    int p[5]={15,30,28,19,61};
    int arr[4][5];
    register short i,j;
    printf("\nLeft Shift\n");
    printf("\nGiven P[5]\n");
    for(i=0;i<5;i++)
        printf(" %d ",p[i]);
    shift(p,5,2);
    printf("\nAfter Two left Shift\n"); 
    for(i=0;i<5;i++)
        printf(" %d ",p[i]);
    printf("\n \n");
    for(i=0;i<4;i++)
        for(j=0;j<5;j++)
	{
	    printf("Enter Matrix1[%d][%d]: ",i,j);
	    scanf("%d",&arr[i][j]);
	}
    printf("\n \nGiven Matrix is:\n");
    for(i=0;i<4;i++)
    {
	for(j=0;j<5;j++)
	    printf(" %d\t",arr[i][j]);
	shift(arr[i],5,1);
	printf("\n");
    }
    printf("\nShifted Matrix is:\n");
    for(i=0;i<4;i++)
    {
	for(j=0;j<5;j++)
	    printf(" %d\t",arr[i][j]);
	printf("\n");
    }
    return 0;
}
//--------------------------------------