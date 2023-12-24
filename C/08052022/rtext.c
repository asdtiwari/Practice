/*WAP to read the text from existing file*/
#include<stdio.h>
void main()
{
	FILE *p;
	p=fopen("text.txt","r");
	char c;
	printf("Extraction of text from file\n");
	do
	{
		c=getc(p);
		if(c!='0')
		{
			printf("%c",c);
		}
	}while(c!='0');
}