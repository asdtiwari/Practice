/*WAP to count the number of occurrences of any two vowels in succession in a line of text. For example, in the following sentence:
"Please read this application and give me gratuity"
such occurrences are ea,ea,ui.*/
/*Author: ASDT Date: January 30, 2023*/
//------------------------------------
#include<stdio.h>
//------------------------------------
int isvowel(char *ptr)
{
	if(*ptr=='a'||*ptr=='e'||*ptr=='i'||*ptr=='o'||*ptr=='u'||*ptr=='A'||*ptr=='E'||*ptr=='I'||*ptr=='O'||*ptr=='O')
		return 1;
	return 0;
}
//------------------------------------
int count(char *ptr)
{
	register short i,n;
	for(i=0,n=0;*(ptr+i)!='\0';i++)
		if(isvowel(ptr+i)&&isvowel(ptr+i+1))
			n++;
	return n;
}
//------------------------------------
int main(void)
{
	char in[250];
	printf("\nOccurrences of two consecutive vowels\n");
	printf("\nEnter a Paragraph:\n");
	gets(in);
	printf("\nThere are %d consecutive vowels\n",count(in));
	return 0;
}
//------------------------------------