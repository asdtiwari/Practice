//program to calculate temperature conversion from celsius to fehrenheit
#include<stdio.h>
void main()
{
	float i,o;
	printf("Enter the temperature in celsius\n\t");
	scanf("%f",&i);
	o=((9/5.0)*i)+32;
	printf("%.2fC is %.2fF",i,o);
}