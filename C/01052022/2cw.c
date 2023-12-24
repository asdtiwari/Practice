/*count number of words in a sentence*/
#include<stdio.h>
void main()
{
	char a[100];
	int i,c=1;
	printf("Enter a well gramatical sentence\n");
	gets(a);
	for(i=0;a[i]!='\0';i++)
	{
		if(a[i]==32)
		{
			c++;
		}
	}
	printf("%d word in above sentence",c);
}