//WAP to calculate the sum of natural no. upto 10 and find their average
#include<stdio.h>
int main(void)
{
	int i,sum;
	printf("\n Sum and Average \n");
	for(i=1,sum=0;i<=10;i++)
	{
		printf(" %d ",i);// 1 2 3 4
		sum=sum+i;	//0+1=1+2=3+3=6+4=10
	}
	printf("\n Sum : %d \n Average %.2f \n",sum,sum/10.0);
	return 0;
}