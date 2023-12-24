/*Example of toupper()*/
#include<stdio.h>
#include<string.h>
void main()
{
	char a[10];
	printf("Enter lowercase words");
	scanf("%s",a);
	toupper(a);
	printf("%s",a);
}