/*Calculate factorial by using function with argument and return*/
#include<stdio.h>
void main()
{
	unsigned long long int fac(unsigned long long int);
	unsigned long long int i,o;
	printf("Enter a Number ");
	scanf("%llu",&i);
	o=fac(i);
	printf("Factorial is %llu",o);
}
unsigned long long int fac(unsigned long long int i)
{
	unsigned long long int a,f=1;
	for(a=1;a<=i;a++)
	{
		f*=a;
	}
	return(f);
}
