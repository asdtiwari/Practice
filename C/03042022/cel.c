//program to calculate temperature conversion from fehrenheit to celsius
#include<stdio.h>
void main()
{
	float i,o;
	printf("Enter the temperature in fehrenheit\n\t");
	scanf("%f",&i);
	o=((i-32)*5)/9.0;
	printf("%.2fF is %.2fC",i,o);
}