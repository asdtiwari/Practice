/*Take input of three digit number from user and calculate sum of digits*/
#include<stdio.h>
void main()
{
	int i,s;
	printf("Give three digit number whose digits you want to add\n\t");
	scanf("%d",&i);
	s=(i/100)+((i/10)%10)+(i%10);
	printf("Given three digit number %d sum of whose digits are %d",i,s);
}