/*Program to calculate gross salary and net salary. Accept basic salary from user. TA (Travel Allowance) is 10% of basic salary, PF (Provident Fund) is 7.8% of basic, DA (Dearness Allowance) is 500.*/
#include<stdio.h>
int main(void)
{
	float bs,ta,pf,da,gs,ns;
	printf("\n Salary Calculator \n");
	printf("\n Give your basic salary: ");
	scanf("%f",&bs);
	ta=10.0/100*bs;
	pf=7.8/100*bs;
	da=500;
	gs=bs+ta+pf+da;
	ns=gs-pf;
	printf("\nOutput: \n Travel Allowance %.2f \n Provident fund %.2f\n Dearness Allowance %.2f \n Gross Salary %.2f \n Net Salary %.2f\n",ta,pf,da,gs,ns);
	return 0;
}