/*WAP to copy the constant of a 5-element integer array into another array in reverse order.*/
/*Author: ASDT Date: January 16, 2023*/
//------------------------------------
#include<stdio.h>
#define size 5
//------------------------------------
void input(int *ptr)
{
	register short i;
	for(i=0;i<size;i++)
	{
		printf("Enter element %d: ",i+1);
		scanf("%d",ptr+i);
	}
	printf("*** Element Stored Successfully ***\n");
	return;
}
//------------------------------------
void reverse(int *arr, int *rev)
{
	register short i,j;
	for(i=0,j=size-1;i<size;i++,j--)
		*(rev+i)=*(arr+j);
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
	int arr[size],rev[size];
	printf("\nCopy one array to another in reverse order\n");
	input(&arr[0]);
	printf("\nGiven Input:\n");
	print(&arr[0]);
	reverse(&arr[0],&rev[0]);
	printf("\nReverse Array:\n");
	print(&rev[0]);
	return 0;
}
//------------------------------------