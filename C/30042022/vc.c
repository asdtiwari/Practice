/*Write a C program to check wheather the given alphabet is vowel or consonant*/
#include<stdio.h>
void main()
{
	char a;
	printf("Enter an alphabet");
	scanf("%c",&a);
	if(a=='a'||a=='e'||a=='i'||a=='o'||a=='u'||a=='A'||a=='E'||a=='I'||a=='O'||a=='U')
	{
		printf("%c is vowel",a);
	}
	else
	{
		printf("%c is consonant",a);
	}
}