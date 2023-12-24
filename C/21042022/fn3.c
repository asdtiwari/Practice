/*An example program of function with argument and return*/
#include<stdio.h>
void main()
{
	int sum(int,int);
	int a,b,d;
	printf("Enter the value of a and b");
	scanf("%d%d",&a,&b);
	d=sum(a,b);
	printf("%d+%d=%d",a,b,d);
}
int sum(int a,int b)
{
	int c;
	c=a+b;
	return(c);
}
