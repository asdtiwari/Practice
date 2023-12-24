/*Example of strrev()*/
#include<stdio.h>
#include<string.h>
void main()
{
	char a[10];
	printf("Enter a words");
	scanf("%s",a);
	strrev(a);
	printf("%s",a);
}