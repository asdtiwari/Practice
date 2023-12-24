//WAP to calculate the sum of two numbers
#include<stdio.h>
int main(void)
{
	int num1,num2,sum;
	printf("\n Sum \n");
	printf("\nGive no one: ");
	scanf("%d",&num1);
	printf("Give another no: ");
	scanf("%d",&num2);
	sum=num1+num2;
	printf("\n %d + %d = %d",num1,num2,sum);
	return 0;
}