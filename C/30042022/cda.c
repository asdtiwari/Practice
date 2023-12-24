/*Write a C program to input any character and check wheather it's alphabet,digit or special character*/
#include<stdio.h>
void main()
{
	char a;
	printf("Enter a character");
	scanf("%c",&a);
	if((a>='a'&&a<='z')||(a>='A'&&a<='Z'))
	{
		printf("%c is Alphabet",a);
	}
	else if(a>='0'&&a<='9')
	{
		printf("%c is digit",a);
	}
	else
	{
		printf("%c is special character",a);
	}
}