/*Example of strcmp()*/
#include<stdio.h>
#include<string.h>
void main()
{
	char a[10],b[10];
	int k;
	printf("Enter two words");
	scanf("%s%s",a,b);
	k=strcmp(a,b);
	if(k==0)
	{
		printf("Both strings are same");
	}
	else
	{
		printf("Both strings aren't same");
	}
}