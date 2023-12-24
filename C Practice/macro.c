/*Write macro definition with arguments for calculation of area and perimeter of triangle, a square and a circle. Store these macro definition in a file "areaperi.h". Include this file in your program, and use the macro definition for calculating area and perimeter for different squares, triangles and circles.*/
/*Author: ASDT Date: January 15, 2023*/
//====================================
/*periarea.h*/
#include<math.h>
#define PI (22/7.0)
#define perisquare(e) (4*e)
#define peritriangle(a,b,c) (a+b+c)
#define circumference(r) (2*PI*r)
#define semi(a,b,c) (peritriangle(a,b,c)/2.0)
#define areasquare(e) (e*e)
#define areatriangle(a,b,c) (sqrt(semi(a,b,c)*(semi(a,b,c)-a)*(semi(a,b,c)-b)*(semi(a,b,c)-c)))
#define areacircle(r) (PI*r*r)
//====================================
/*file.c*/
#include<stdio.h>
#include "areaperi.h"
int main()
{
	auto float side,side2,side3,radius;
	printf("\nMacros Expansion From Headerfile\n");
	printf("\nEnter radius of circle: ");
	scanf("%f",&radius);
	printf("Circumference: %.2f unit \nArea: %.2f sq unit \n",circumference(radius),areacircle(radius));
	printf("\nEnter edge of square: ");
	scanf("%f",&side);
	printf("Perimeter: %.2f unit \nArea: %.2f sq unit \n",perisquare(side),areasquare(side));
	printf("\nEnter sides of triangle: ");
	scanf("%f%f%f",&side,&side2,&side3);
	printf("Perimeter: %.2f unit \nArea: %.2f sq unit \n",peritriangle(side,side2,side3),areatriangle(side,side2,side3));
	return 0;
}
//====================================