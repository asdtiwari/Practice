//WAP to calculate the area and perimeter of triangle
#include<stdio.h>
#include<math.h>
int main()
{
	float side1,side2,side3,peri,semiperi,area;
	printf("\n Triangle Calculator \n");
	printf("\nThino Side do: \n");
	scanf("%f%f%f",&side1,&side2,&side3);
	peri=side1+side2+side3;
	semiperi=peri/2;
	area=sqrt(semiperi*(semiperi-side1)*(semiperi-side2)*(semiperi-side3));
	printf("\n Area : %.2f \n Perimeter : %.3f",area,peri);
	return 0;
}
