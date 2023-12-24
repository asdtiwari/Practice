/*WAP to store a few strings using an array of pointers to strings. Receive a string and check if it is present in the array*/
/*Author: ASDT Date: January 26, 2023*/
//------------------------------------
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//------------------------------------
int main(void)
{
	register short i,flag=0;
	char *ptr[10],*in,temp[20];
	printf("\n2D String \n");
	printf("\nEnter %d strings\n",10);
	for(i=0;i<10;i++)
	{
		scanf("%s",temp);
		in=(char*)malloc(strlen(temp)*sizeof(char));
		strcpy(in,temp);
		ptr[i]=in;
	}
	printf("\nEnter a string to search \n");
	scanf("%s",temp);
	for(i=0;i<10;i++)
		if(strcmp(temp,ptr[i])==0)
		{
			printf("\n :) Found \n");
			flag=1;
		}
	if(flag==0)
		printf("\n *_* Not found \n");
	return 0;
}
//------------------------------------