/*Write macro definition with arguments for calculation of simple interest and amount. Store these macro definition in a file "Interest.h". Include this file in your program, and use the macro definition for calculating Simple Interest and Amount*/
/*Author: ASDT Date: January 15, 2023*/
//------------------------------------
#include<stdio.h>
#include "Interest.h"
//------------------------------------
int main(void)
{
	auto float p,r,t;
	printf("\nSimple Interest Calculator\n");
	printf("Principal: ");
	scanf("%f",&p);
	printf("Rate: ");
	scanf("%f",&r);
	printf("Time: ");
	scanf("%f",&t);
	printf("SI: %.2f \nAmount %.2f \n",si(p,r,t),amount(p,r,t));
	return 0;
}
//------------------------------------