/*Write a C program to create Simple calculator using switch case*/
#include<stdio.h>
void main()
{
	char o;
	int a,b,c;
	printf("Enter the operator to perform calulation ");
	scanf("%c",&o);
	printf("Enter two numbers ");
	scanf("%d%d",&a,&b);
	switch(o)
	{
		case '+':
			c=a+b;
			printf("%d + %d is %d",a,b,c);
			break;
		case '-':
			c=a-b;
			printf("%d - %d is %d",a,b,c);
			break;
		case '/':
			c=a/b;
			printf("%d / %d is %d",a,b,c);
			break;
		case '*':
			c=a*b;
			printf("%d * %d is %d",a,b,c);
			break;
		case '%':
			c=a%b;
			printf("%d %% %d is %d",a,b,c);
			break;
		default:
			printf("invalid input");
	}
}