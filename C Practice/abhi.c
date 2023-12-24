//WAP to calculate si
#include<stdio.h>
int main()
{
	float p,r,t,si,amt;
	printf("\n si calculator \n");
	printf("\n enter principale, rate and time");
	scanf("%f%f%f",&p,&r,&t);
	si=p*r*t/100;
	amt=si+p;
	printf("\n si: %.2f \n amount : %.2f", si,amt);
	return 0;
}