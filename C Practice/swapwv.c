//WAP to swap two numbers without using third variable
#include<stdio.h>
int main(void)
{
	int a,b;
	printf("\n Swapping \n");
	printf("\n Enter two numbers: ");
	scanf("%d%d",&a,&b);	// 2 5
	printf("\nBefore Swapping\n a %d\n b %d",a,b);	
	a=a+b;	//2+5=7	a=7	b=5
	b=a-b;	//7-5=2	a=7	b=2
	a=a-b;	//7-2=5 a=5	b=2
	printf("\nAfter Swapping\n a %d \nb %d",a,b);
	return 0;
}