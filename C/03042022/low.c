//program to lowerise the upper case letter
#include<stdio.h>
void main()
{
	int a;
	char i;
	printf("Give an uppercase alphabet to lowerise it\n\t");
	scanf("%c",&i);
	a=i+32;
	printf("Lowerise of %c is %c",i,a);
}