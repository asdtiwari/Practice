//WAP to calculate the m power of n
#include<stdio.h>
#include<math.h>
int main(void)
{
	int inp,power,n,out;
	printf("\n Indices Calculator \n");
	printf("Give a number: ");
	scanf("%d",&inp);
	printf("Give power: ");
	scanf("%d",&n);
	out=pow(inp,n);
	printf("\n Ans : %d\n",out);
	return 0;
}