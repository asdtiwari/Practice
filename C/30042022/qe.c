/*write a program to find all roots of a quadratic equation.*/
#include<stdio.h>
#include<math.h>
void main()
{
	float a,b,c,r1,r2;
	printf("Enter the coefficient of square variable term ");
	scanf("%f",&a);
	printf("Enter the coefficient of linear variable term ");
	scanf("%f",&b);
	printf("Enter the constant term ");
	scanf("%f",&c);
	r1=(-b+sqrt(pow(b,2)-4*a*c))/(2*a);
	r2=(-b-sqrt(pow(b,2)-4*a*c))/(2*a);
	printf("Roots are %f and %f",r1,r2);
}