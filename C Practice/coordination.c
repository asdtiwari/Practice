/*The x and y coordinate of 10 different points are entered through the keyboard. WAP to find the distance of last point from the first point (sum of distances between consecutive point(s).*/
/*Author: ASDT Date: January 21, 2023*/
//------------------------------------
#include<stdio.h>
#include<math.h>
//------------------------------------
int main(void)
{
	float x[10],y[10],dist=0,sum;
	register short i;
	printf("\nCoordinates\n");
	for(i=0;i<10;i++)
	{
		printf("Enter (x%d,y%d): ",i+1,i+1);
		scanf("%f%f",&x[i],&y[i]);
	}
	printf("\n*** DATA SUCCESSFULLY STORED ***\n");
	for(i=0;i<9;i++)
		dist+=sqrt(pow(x[i+1]-x[i],2)+pow(y[i+1]-y[i],2));
	printf("\nSum of distances between consecutive points are : %.2f",dist);
	printf("\nDistance between first and last point is : %.2f \n",sqrt(pow(x[9]-x[0],2)+pow(y[9]-y[0],2)));
	return 0;
}
//------------------------------------