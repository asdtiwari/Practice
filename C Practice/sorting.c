/*WAP to alphabetically sort a set of names stored using an array of pointer to strings.*/
/*Author: ASDT Date: January 26, 2023*/
//------------------------------------
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//------------------------------------
void upper(char *ptr)
{
	register short i;
	for(i=0;*(ptr+i)!='\0';i++)
		if(*(ptr+i)>=97 && *(ptr+i)<=122)
			*(ptr+i)-=32;
	return;
}
//------------------------------------
int main(void)
{
	char *ptr[5],in[20],*temp;
	register short i,j,cmp;
	printf("\nSorting of String \n");
	for(i=0;i<5;i++)
	{
		printf("Enter strings %d : ",i+1);
		scanf("%s",in);
		upper(in);
		ptr[i]=(char *)malloc(strlen(in)*sizeof(char));
		strcpy(ptr[i],in);
	}
	printf("\n :) Data Stored successfully\n");
	for(i=0;i<5;i++)
	{
		for(j=0,cmp=0;j<4;j++)
		{
			if(strcmp(ptr[j],ptr[j+1])>0)
			{
				temp=ptr[j];
				ptr[j]=ptr[j+1];
				ptr[j+1]=temp;
			}
			else
				cmp++;
		}
		if(cmp==j)
			break;
	}
	printf("\nAlphabetically Sorted Data \n");
	for(i=0;i<5;i++)
		printf(" %s\n",ptr[i]);
	return 0;
}
//------------------------------------