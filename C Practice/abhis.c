/*WAP to canvert degree celcius to ferenheit */
#include<stdio.h>
int main()
{
	float fer,cel;
	printf("\n temperatur commertet \n");
	printf("\n enter temp in degree cel : ");
	scanf("%f",&cel);
	fer=((9*cel)/5)+32;
	printf("\n fetebheit : %f",fer);
	return 0;
}