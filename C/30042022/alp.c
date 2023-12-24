/*Write a C program to check wheather the given character is alphabet or not*/
#include<stdio.h>
void main()
{
	char a;
	printf("Enter year");
	scanf("%c",&a);
	if((a>=65&&a<=90)||a>=97&&a<=122)
	{
		printf("%c is alphabet",a);
	}
	else
	{
		printf("%c isn't alphabet",a);
	}
}