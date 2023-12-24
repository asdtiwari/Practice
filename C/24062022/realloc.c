/*WAP to illustrate the example of realloc()*/
#include<stdio.h>
#include<stdlib.h>
void main()
{
	int *ptr,choice,loop,size;
	printf("\nEnter the size of the array ");
	scanf("%d",&size);
	ptr=(int*)malloc(sizeof(int)*size);
	printf("\nEnter %d elements in array\n",size);
	for(loop=0;loop<size;loop++)
	{
		printf("\nEnter element at %u address ",(ptr+loop));
		scanf("%d",(ptr+loop));
	}
	printf("\nOutput\n");
	for(loop=0;loop<size;loop++)
	{
		printf("\nElement at %d address is %d",(ptr+loop),*(ptr+loop));
	}
	while(1)
	{
		printf("\n-----------------------------------\n");
		printf("\nPress 0 to exit\nOr resize your array ");
		scanf("%d",&size);
		realloc(ptr,size);
		if(size==0)
		{
			printf("\nExit...\n");
			break;
		}
		printf("\nEnter %d elements in array\n",size);
		for(loop=0;loop<size;loop++)
		{
			printf("\nEnter element at %u address ",(ptr+loop));
			scanf("%d",(ptr+loop));
		}
		printf("\nOutput\n");
		for(loop=0;loop<size;loop++)
		{
			printf("\nElement at %d address is %d",(ptr+loop),*(ptr+loop));
		}
	}
}