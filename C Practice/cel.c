/*WAP to convert degree ferenheit to celcius
Author: ASD Tiwari Date: feb 07, 2023*/
#include<stdio.h>
int main(void)
{
	float fer,cel;
	printf("\n Temperatur Converter\n");
	printf("\nEnter temp in degree fer: ");
	scanf("%f",&fer);
	cel=((fer-32)*5)/9;
	printf("\n Temperature is %.2f degree celcius",cel);
	return 0; 	
}