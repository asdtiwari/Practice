//WAP to add first and last digit of three digit number
#include<stdio.h>
int main(void)
{
	int inp,first,last,sum;
	printf("\n Digit Calculator \n");
	printf("\nGive three digit no: ");
	scanf("%d",&inp);
	first=inp%10;
	last=inp/100;
	sum=first+last;
	printf("\n%d + %d = %d\n",last,first,sum);
	return 0;
}