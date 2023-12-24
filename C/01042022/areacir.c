//area of circle
#include<stdio.h>
#include<math.h>
#define PI 3.14
void main()
{
	float a,r;
	printf("Enter the radius ");
	scanf("%f",&r);
	a=PI*pow(r,2);
	printf("Area of Circle = %.2f",a);
}