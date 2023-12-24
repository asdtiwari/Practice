/*WAP to store text in a file*/
#include<stdio.h>
void main()
{
	FILE *p;
	p=fopen("text.txt","w");
	char c;
	printf("Enter the text\nPress 0 to complete\n");
	do
	{
		scanf("%c",&c);
		putc(c,p);
	}while(c!='0');
	printf("File successfully created");
	fclose(p);
}