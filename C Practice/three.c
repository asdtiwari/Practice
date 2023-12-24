//WAP to calculate the sum of digit of three digit number
#include<stdio.h>
int main(void)
{
	int inp,sum,once,tens,hunds;
	printf("\n Sum of digits \n");
	printf("\nGive three digit number: ");
	scanf("%d",&inp); //123
	once=inp%10; //3
	tens=(inp%100)/10;  //2
	hunds=inp/100; //1
	sum=once+tens+hunds;
	printf("\n %d + %d + %d = %d",hunds,tens,once,sum);
	return 0;
}