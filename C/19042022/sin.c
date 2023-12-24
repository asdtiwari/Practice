//program to calculate the sum of given input using do while loop
#include<stdio.h>
void main()
{
	int a,s=0;
	printf("Enter 0 to exit\n");
	do
	{
		printf("Enter the number ");
		scanf("%d",&a);
		s=s+a;
	}while(a!=0);
	printf("The sum of input is %d",s);
}