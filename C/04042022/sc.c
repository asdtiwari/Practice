//take input as an alphabet from user and check wheather it is capital or small
#include<stdio.h>
void main()
{
	char i;
	printf("Enter an alphabet to know wheather it is small or capital ");
	scanf("%c",&i);
	if (i>=65 && i<=90)
	{
		printf("%c is Capital",i);
	}
	if (i<=122 && i>=97)
	{
		printf("%c is small",i);
	}
}