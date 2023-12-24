/*WAP which perform the following tasks:
- Initialize an integer array of 10 elements in main()
- Pass the entire array to a function modify()
- In modify() multiply each element of array by 3
- Return the control to main() and print the new array elements in main()*/
/*Author: ASDT Date: January 16, 2023*/
//------------------------------------
#include<stdio.h>
#define size 10
//------------------------------------
void modify(int *ptr)
{
	register short i;
	for(i=0;i<size;i++)
		*(ptr+i)*=3;	
	return;
}
//------------------------------------
int main(void)
{
	int array[size]={1,2,3,4,5,6,7,8,9,10};
	register short i;
	printf("\nArray is:\n");
	for(i=0;i<size;i++)
		printf(" %d ",array[i]);
	printf("\nModification Started");
	modify(&array[0]);
	printf("\nAfter Modification \nArray is: \n");
	for(i=0;i<size;i++)
		printf(" %d ",array[i]);
	printf("\n");
	return 0;
}
//------------------------------------
