/*Example of strcpy()*/
#include<stdio.h>
#include<string.h>
void main()
{
	char a[10],b[10];
	int k;
	printf("Enter a word");
	scanf("%s",a);
	strcpy(b,a);
	printf("A is %s\nB is %s",a,b);
} 