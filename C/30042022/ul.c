/*Write a C program to input any character and check wheather it's uppercase or lowercase alphabet*/
#include<stdio.h>
void main()
{
	char a;
	printf("Enter a character");
	scanf("%c",&a);
	if((a>='a'&&a<='z')||(a>='A'&&a<='Z'))
	{
		if(a>='a'&&a<='z')
		{
			printf("%c is lowercase",a);
		}
		else
		{
			printf("%c is uppercase",a);
		}
	}
	else
	{
		printf("%c isn't alphabet",a);
	}
}