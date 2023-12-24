/*WAP to reverse the strings stored in an array of pointers to strings:*/
/*Author: ASDT Date: January 26, 2023*/
//------------------------------------
#include<stdio.h>
#include<stdlib.h>
//------------------------------------
int len(char *ptr)
{
	register short i;
	for(i=0;*(ptr+i)!='\0';i++)
	;
	return i;
}
//------------------------------------
void cpy(char *ptr1, char *ptr2)
{
	register short i;
	for(i=0;*(ptr2+i)!='\0';i++)
		*(ptr1+i)=*(ptr2+i);
	*(ptr1+i)='\0';
	return;
}
//------------------------------------
void rev(char *ptr)
{
	register short i,j;
	register char temp;
	for(i=0,j=len(ptr)-1;i<len(ptr)/2;i++,j--)
	{
		temp=*(ptr+i);
		*(ptr+i)=*(ptr+j);
		*(ptr+j)=temp;
	}
	return;
}
//------------------------------------
int main(void)
{
	char *ptr[5],in[20];
	register short i;
	printf("\nReverse String \n");
	for(i=0;i<5;i++)
	{
		printf("Enter string %d : ",i+1);
		scanf("%s",in);
		ptr[i]=(char *)malloc(len(in)*sizeof(char));
		cpy(ptr[i],in);
		rev(ptr[i]);
	}
	printf("\n :) Data Stored Successfully \n");
	printf("\nReverse Strings:\n");
	for(i=0;i<5;i++)
		printf(" %s\n",ptr[i]);
	return 0;
}
//------------------------------------