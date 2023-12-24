/*WAP to implement the insertion sort algorithm*/
/*Author: ASDT Date: January 17, 2023*/
//------------------------------------
#include<stdio.h>
#include<stdlib.h>
int size;
//------------------------------------
void input(int *ptr)
{
	register short i;
	printf("\n");
	for(i=0;i<size;i++)
	{
		printf("Enter element %d: ",(i+1));
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
void insertionsort(int *ptr)
{
	register short i,j,temp,cmp=0,swap=0;
	printf("\n*** Sorting Started ***\n");
	for(i=1;i<size;i++)
	{
		for(j=i;j>0;j--)
		{
			printf("\nPointer on index %d \nComparision reached %d \nNow comparison b/w %d & %d",i,++cmp,*(ptr+j-1),*(ptr+j));
			if(*(ptr+j-1)>*(ptr+j))
			{
				temp=*(ptr+j);
				*(ptr+j)=*(ptr+j-1);
				*(ptr+j-1)=temp;
				printf("\nSwapping reached %d",++swap);
			}
			else
				break;
			print(ptr);
		}
		printf("\n");
	}
	printf("\nArray sorted in \n %d Comparison \n %d Swapping",cmp,swap);
	print(ptr);
	return;
}
//------------------------------------
int main(void)
{
	int *ptr;
	printf("\nInsertion Sort\n");
	printf("\nEnter Size of Array: ");
	scanf("%d",&size);
	ptr=(int*)malloc(size*sizeof(int));
	printf("\nDynamically Memory Allocated For Array \n");
	input(ptr);
	print(ptr);
	insertionsort(ptr);
	return 0;
}
//------------------------------------