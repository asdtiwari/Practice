/*An example to add two number by using array*/
#include<stdio.h>
void main()
{
	int a[3];
	printf("Enter two number ");
	scanf("%d%d",&a[0],&a[1]);
	a[2]=a[0]+a[1];
	printf("Sum is %d",a[2]);
}