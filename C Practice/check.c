/*If an array arr contains n elements, then WAP to check if arr[0]=arr[n-1],arr[1]=arr[n-2] and so on*/
/*Author: ASDT Date: January 16, 2023*/
//------------------------------------
#include<stdio.h>
#include<stdlib.h>
int size;
//------------------------------------
void input(int *ptr)
{
	register short i;
	for(i=0;i<size;i++)
	{
		printf("Enter element %d: ",i+1);
		scanf("%d",(ptr+i));
	}
	printf("*** Element stored successfully ***\n");
	return;
}
//------------------------------------
void check(int *ptr)
{
	register short i,j;
	printf("\n%-10s\t%-15s\t%-10s\n","Array[i]","Array[size-i]","Condition");
	for(i=0,j=size-1;i<=size/2;i++,j--)
	{
		printf("%-10d\t%-15d\t",*(ptr+i),*(ptr+j));
		*(ptr+i)==*(ptr+j)?printf("%-10s\n","Equal"):printf("%-10s\n","Not Equal");
	}
	return;
}
//------------------------------------
void print(int *ptr)
{
	register short i;
	for(i=0;i<size;i++)
		printf(" %d ",*(ptr+i));
	printf("\n");
	return;
}
//------------------------------------
int main(void)
{
	int *ptr;
	printf("\nArray Checking\n");
	printf("\nEnter size of array: ");
	scanf("%d",&size);
	ptr=(int*)malloc(size*sizeof(int));
	input(ptr);
	printf("\nArray is:\n");
	print(ptr);
	printf("\n*** Checking Start ***\n");
	check(ptr);
	return 0;
}
//------------------------------------