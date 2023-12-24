//add five numbers
#include<stdio.h>
void main()
{
	float a,b,c,d,e,s;
	printf("Enter the five values to add with space to seperate each other ");
	scanf("%f%f%f%f%f",&a,&b,&c,&d,&e);
	s=a+b+c+d+e;
	printf("Sum is = %.2f",s);
}