//print the factorial of given number using do while loop
#include<stdio.h>
void main()
{
	int a,s=1;
	printf("Enter a number  ");
	scanf("%d",&a);
	do
	{
		s=s*a;
		a--;
	}while(a>0);
	printf("Factorial of %d",s);
}