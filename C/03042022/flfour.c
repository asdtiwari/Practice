//input any four digit number and calculate sum of first and last digit
#include<stdio.h>
void main()
{
	int i,a;
	printf("Give a four digit number whose first and last digit you want to add\n\t");
	scanf("%d",&i);
	a=(i/1000)+(i%10);
	printf("The sum of first and last digit of four digit number %d is %d",i,a);
}