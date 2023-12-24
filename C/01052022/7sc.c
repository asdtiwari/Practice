/*Example of strcat()*/
#include<stdio.h>
#include<string.h>
void main()
{
	char a[10],b[10];
	int k;
	printf("Enter two words");
	scanf("%s%s",a,b);
	strcat(a,b);
	printf("A=%s",a);
} 