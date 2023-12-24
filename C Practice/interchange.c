/*WAP that interchanges elements at odd position with elements at even position in an array of 10 elements*/
/*Author: ASDT Date: January 16, 2023*/
//------------------------------------
#include<stdio.h>
#define size 10
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
void interchange(int *ptr)
{
	register short i;
	auto int temp;
	for(i=0;i<size-1;i+=2)
	{
		temp=*(ptr+i);
		*(ptr+i)=*(ptr+i+1);
		*(ptr+i+1)=temp;
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
	int arr[size];
	printf("\nInterchange even with odd position\n");
	input(&arr[0]);
	printf("\nGiven Input:\n");
	print(&arr[0]);
	interchange(&arr[0]);
	printf("\nAfter Interchange:\n");
	print(&arr[0]);
	return 0;
}
//------------------------------------