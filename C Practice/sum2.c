//WAP to sum five numbers
#include<stdio.h>
int main(void)
{
	int a,b,c,d,e,sum;
	printf("\nSummation of Five No.\n");
	printf("\nGive 5 no.: ");
	scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
	sum=a+b+c+d+e;
	printf("\n %d + %d + %d + %d + %d = %d \n",a,b,c,d,e,sum);
	return 0;
}