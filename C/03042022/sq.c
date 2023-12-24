//program to calculate square of a given number
#include<stdio.h>
#include<math.h>
void main()
{
	float i,o;
	printf("Enter the number to find square of\n\t");
	scanf("%f",&i);
	o=pow(i,2);
	printf("The square of %.2f is %.2f",i,o);
}