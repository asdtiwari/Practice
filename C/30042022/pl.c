/*Write a program to calculate profit or loss.*/
#include<stdio.h>
void main()
{
	float s,c,a;
	printf("Enter Cost Price and Selling price");
	scanf("%f%f",&c,&s);
	a=s-c;
	if(a>0)
	{
		printf("Profit of %.2f",a);
	}
	else if(a<0)
	{
		printf("Loss of %.2f",-a);
	}
	else
	{
		printf("Neither profit nor loss");
	}
}