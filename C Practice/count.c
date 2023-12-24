/*Twenty five numbers are entered from the keyboard into an array. WAP to find out how many of them are positive, how many are negative, how many are even and how many odd.*/
/*Author: ASDT Date: January 16, 2023*/
//------------------------------------
#include<stdio.h>
#define size 25
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
void count(int *arr)
{
	register short i,even=0,odd=0,pos=0,neg=0;
	for(i=0;i<size;i++)
	{
		if(*(arr+i)>0)
			pos++;
		if(*(arr+i)<0)
			neg++;
		if(*(arr+i)%2==0)
			even++;
		else
			odd++;
	}
	printf("Counting Complete \nEven: %d \nOdd: %d \nPositive: %d \nNegative : %d \n",even,odd,pos,neg);
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
	printf("\nCounting Even, Odd, Positive & Negative\n");
	input(&arr[0]);
	printf("\nGiven Input:\n");
	print(&arr[0]);
	count(&arr[0]);
	return 0;
}
//------------------------------------