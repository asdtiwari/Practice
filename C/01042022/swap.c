//program to swap values
#include<stdio.h>
void main()
{
	float a,b,c;
	printf("Give value of a and b ");
	scanf("%f%f",&a,&b);
	printf("\nGiven value of a and b respectively is %.2f %.2f",a,b);
	c=a;
	a=b;
	b=c;
	printf("\nSwapped Value of a and b respectively is %.2f %.2f",a,b);
}