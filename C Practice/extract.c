/*WAP that extracts part of the given string from the specified position. For example, if from the string "working with string is fun", starting from position 3,4 charcters are exacted then it should return "king".*/
/*Author: ASDT Date: January 24, 2023*/
//------------------------------------
#include<stdio.h>
#include<string.h>
//------------------------------------
int main(void)
{
	char input[50];
	auto short pos,len,i;
	printf("\nExtraction\n");
	printf("\nEnter a sentence\n");
	gets(input);
	printf("\nEnter the position and no. of words to extract: ");
	scanf("%hd%hd",&pos,&len);
	printf("\nOutput:\n");
	for(i=pos;i<pos+len;i++)
		printf("%c",input[i]);
	printf("\n");
	return 0;
}
//------------------------------------