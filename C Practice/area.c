/*The area of a triangle can be computed by the sine law when 2 sides of the triangle and the angle between them are known,
Area=(1/2)ab sin(angle)
Given the following 6 triangular pieces of land, WAP to find their area determine which is the largest.
Plot No.        a             b            angle(rad)
    1               137.4       80.9         0.78
    2              155.2       92.62       0.89
    3              149.3       97.93        1.35
    4              160.0      100.25     9.00
    5              155.6       68.95       1.25
    6              149.7       120.0        1.75*/
/*Author: ASDT Date: January 16, 2023*/
//------------------------------------
#include<stdio.h>
#include<math.h>
//------------------------------------
int main(void)
{
	float a[]={137.4,155.2,149.3,160.0,155.6,149.7};
	float b[]={80.9,92.62,97.93,100.25,68.95,120.0};
	float angle[]={0.78,0.89,1.35,9.00,1.25,1.75};
	short i,size=sizeof(a)/sizeof(float);
	double area[size];
	for(i=0;i<size;i++)
		area[i]=(0.5*a[i]*b[i]*sin(angle[i]));
	printf("%s\t%s\t%s\t%s\t%s\n","Plot No.","a","b","Angle(rad)","Area(in sq. unit)");
	for(i=0;i<size;i++)
		printf("%4d%15.2f%8.2f%12.2f%20.2lf\n",(i+1),a[i],b[i],angle[i],area[i]);
	return 0;
}
//------------------------------------