/*Example of strleng()*/
#include<stdio.h>
#include<string.h>
void main()
{
	char a[10];
	int k;
	printf("Enter a word");
	scanf("%s",a);
	k=strlen(a);
	printf("%d Characters",k);
}