//WAP to illustrate the example of increment and decrement
#include<stdio.h>
int main(void)
{
	int a=5,b=7,c,d;
	printf("\n Illustration \n");
	printf("a: %d\nb: %d \nc: %d\nd: %d",a,b,c,d);
	c=a++;	//c=a a++	//c=5 a=b
	d=++b;	//++b d=8	//d=8 b=8
	printf("\na: %d\nb: %d \nc: %d\nd: %d",a,b,c,d);
	return 0;
}