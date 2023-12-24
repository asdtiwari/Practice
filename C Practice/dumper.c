/*WAP to delete all vowels from a sentence. Assume that the sentence is not more than 80 characters long.*/
/*Author: ASDT Date: January 26, 2023*/
//------------------------------------
#include<stdio.h>
//------------------------------------
int vowel(char *ptr)
{
	if(*ptr=='a'||*ptr=='A'||*ptr=='e'||*ptr=='E'||*ptr=='i'||*ptr=='I'||*ptr=='o'||*ptr=='O'||*ptr=='u'||*ptr=='U')
		return 1;
	return 0;
}
//------------------------------------
void swap(char *ptr)
{
	register short i;
	for(i=0;*(ptr+i)!='\0';i++)
		*(ptr+i)=*(ptr+i+1);
	return;
}
//------------------------------------
void dumper(char *ptr)
{
	register short i,j;
	for(i=0;*(ptr+i)!='\0';)
	{
		if(vowel(ptr+i))
			swap(ptr+i);
		else
			i++;
	}
}
//------------------------------------
int main(void)
{
	char in[80];
	register short i;
	printf("\nVowel Dumper\n");
	printf("\nEnter a sentence (80 char only):\n");
	gets(in);
	dumper(in);
	printf("\nOutput:\n");
	puts(in);
	return 0;
}
//------------------------------------