//WAP to sum even and odd numbers seperately upto 10
#include<stdio.h>
int main(void)
{
	int i,even,odd;
	printf("\n Summation of Even Odd \n");
	for(i=0,even=0,odd=0;i<=10;i++)
	{
		if(!(i%2))	//i%2=0->1 non zero->0
		{
			printf("Even %d \n",i);
			even=even+i;
		}
		else
		{
			printf("Odd %d \n",i);
			odd=odd+i;
		}
	}
	printf("\n Sum of Even : %d\n Sum of Odd : %d",even,odd);
	return 0;
}