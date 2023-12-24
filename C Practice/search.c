/*An array contains 10 integers. Receive the number to be searched in the array as input. WAP to search this number in the array and display the number of times it occur in the array.*/
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
void search(int *arr)
{
	register short i,time;
	auto int num;
	printf("\nEnter a number to search: ");
	scanf("%d",&num);
	printf("Seaching Start\n");
	for(i=0,time=0;i<size;i++)
	{
		if(num==*(arr+i))
			time++;
	}
	if(time==0)
		printf("Element %d has not found\n",num);
	else
		printf("Element %d has found %d times",num,time);
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
	printf("\nSearching in Array\n");
	input(&arr[0]);
	printf("\nGiven Input:\n");
	print(&arr[0]);
	search(&arr[0]);
	return 0;
}
//------------------------------------