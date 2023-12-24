/*WAP that will read a line and delete from it all occurrences of the word 'the'.*/
/*Author: ASDT Date: January 27, 2023*/
//------------------------------------
#include<stdio.h>
//------------------------------------
void swap(char *ptr)
{
	register short i;
	for(i=0;*(ptr+i)!='\0';i++)
	{
		*(ptr+i)=*(ptr+i+4);
		if(*(ptr+i+4)=='\0')
			break;
	}
	return;
}
//------------------------------------
int the(char *ptr)
{
	register short i=0;
	if(*(ptr+i)=='t'||*(ptr+i)=='T')
		if(*(ptr+i+1)=='h'||*(ptr+i+1)=='H')
			if(*(ptr+i+2)=='e'||*(ptr+i+2)=='E')
				if(*(ptr+i+3)==32||*(ptr+i+3)==10||*(ptr+i+3)=='\0')
					return 1;
	return 0;
}						
//------------------------------------
void chk(char *ptr)
{
	register short i;
	for(i=0;*(ptr+i)!='\0';i++)
	{
		if(*(ptr+i-1)==32||*(ptr+i-1)==10||i==0)
			if(the(ptr+i))
				swap(ptr+i);
	}
	return;
}
//------------------------------------
int main(void)
{
	char in[250];
	printf("\nThe Dumper \n");
	printf("Enter the sentence within 250: \n");
	gets(in);
	chk(in);
	printf("\nOutput:\n");
	puts(in);
	return 0;
}
//------------------------------------