//program to upperise the lower case letter
#include<stdio.h>
void main()
{
	int a;
	char i;
	printf("Give an lower alphabet to upperise it\n\t");
	scanf("%c",&i);
	a=i-32;
	printf("Upperise of %c is %c",i,a);
}