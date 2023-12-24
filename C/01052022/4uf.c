//Program to upperise first word and lowerise remain
#include<stdio.h>
void main()
{
	char a[100];
	int i;
	printf("Enter a sentence\n");
	gets(a);
	for(i=0;a[i]!='\0';i++)
	{
		if(a[i]>=65&&a[i]<=90)
		{
			a[i]+=32;
		}
	}
	for(i=0;a[i]!='\0';i++)
	{
		if(i==0)
		{
			a[i]-=32;
		}
		if(a[i]==32)
		{
			a[i+1]-=32;
		}
	}
	printf("Output\n");
	puts(a);
}