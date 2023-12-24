/*WAP using pointers to find the smallest number in an array of 25 integers.*/
/*Author: ASDT Date: January 17, 2023*/
//------------------------------------
#include<stdio.h>
#define size 25
//------------------------------------
void input(int *ptr)
{
	register short i;
	printf("\n");
	for(i=0;i<size;i++)
	{
		printf("Enter Element %d: ",i+1);
		scanf("%d",(ptr+i));
	}
	printf("\n*** Element Stored Successfully ***\n");
	return;
}
//------------------------------------
void print(int *ptr)
{
	register short i;
	printf("\nArray: \n");
	for(i=0;i<size;i++)
		printf(" %d ",*(ptr+i));
	printf("\n");
	return;
}
//------------------------------------
void small(int *ptr)
{
	register short i;
	register int smallest=*ptr;
	for(i=0;i<size;i++)
		if(smallest>*(ptr+i))
			smallest=*(ptr+i);
	printf("\nSmallest Element is %d \n",smallest);
	return;
}
//------------------------------------
int main(void)
{
	int arr[size];
	printf("\nSmallest in Array\n");
	input(&arr[0]);
	print(&arr[0]);
	small(&arr[0]);
}
//------------------------------------