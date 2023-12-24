//example of gets and puts
#include<stdio.h>
void main()
{
	char a[10][100];
	int i;
	printf("Enter a sentence\n");
	for(i=0;i<10;i++)
	{
		gets(a[i]);
	}
	printf("Output\n");
	for(i=0;i<10;i++)
	{
		puts(a[i]);
	}
}