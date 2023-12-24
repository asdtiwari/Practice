//WAP to calculate the area and perimeter of triangle
#include<stdio.h>
int main(void)
{
	int len,width,peri,area;
	printf("\nArea & Perimeter of Rectangle\n");
	printf("\nGive Length and Width: ");
	scanf("%d%d",&len,&width);
	peri=2*(len+width);
	area=len*width;
	printf("\nArea : %d \nPerimeter : %d \n",area,peri);
	return 0;
}