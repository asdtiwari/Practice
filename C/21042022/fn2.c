/*An example program of function with argument and no return*/
#include<stdio.h>
void main()
{
	void sum(int,int);
	int a,b;
	printf("Enter the value of a and b ");
	scanf("%d%d",&a,&b);
	sum(a,b);
	printf("\nThanks");
}
void sum(int a,int b)
{
	int c;
	c=a+b;
	printf("Sum is %d",c);
}