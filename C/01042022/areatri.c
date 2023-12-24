//area of triangle
#include<stdio.h>
void main()
{
	float a,b,h;
	printf("Enter base ");
	scanf("%f",&b);
	printf("Enter height ");
	scanf("%f",&h);
	a=(b+h)/2;
	printf("Area of triangle = %.2f",a);
}