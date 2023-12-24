/*Write a C program to find maximum among three numbers*/
#include<stdio.h>
void main()
{
	int a,b,c;
	printf("Enter the three numbers");
	scanf("%d%d%d",&a,&b,&c);
	if(a>b&&a>c)
	{
		printf("%d is greater",a);
	}
	else if(b>a&&b>c)
	{
		printf("%d is greater",b);
	}
	else if(a==b&&b==c)
	{
		printf("%d %d %d are same",a,b,c);
	}
	else
	{
		printf("%d is greater",c);
	}
}