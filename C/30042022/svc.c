/*Write a C program to check wheather the given alphabet is vowel or consonant by using switch case*/
#include<stdio.h>
void main()
{
	char a;
	printf("Enter an alphabet");
	scanf("%c",&a);
	switch(a)	
	{
		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u':
		case 'A':
		case 'E':
		case 'I':
		case 'O':
		case 'U':
			printf("%c is vowel",a);
			break;
		default:
			printf("%c is consonant",a);
			break;
	}
}