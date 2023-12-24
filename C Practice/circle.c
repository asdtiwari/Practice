//WAP to calculate the area and circumference of circle
#include<stdio.h>
#define PI 22/7.0
int main(void)
{
	float radius,circum,area;
	printf("\nCircle Calculator\n");
	printf("\nRadius de do: ");
	scanf("%f",&radius);
	circum=2*PI*radius;
	area=PI*radius*radius;
	printf("\nArea : %f \nCircumference : %f\n",area,circum);
	return 0;
}