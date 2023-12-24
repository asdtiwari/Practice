//Upperise the given sentence
#include<stdio.h>
void main()
{
	char a[100];
	int i;
	printf("Enter the Statement\n");
	gets(a);
	for(i=0;a[i]!=0;i++)
	{
		if(a[i]>=97&&a[i]<=122)
		{
			a[i]-=32;
		}
	}
	printf("Output is\n");
	puts(a);
}