//WAP to find even odd using swithch
#include<stdio.h>
int main(void)
{
	int num;
	printf("\n Even Odd \n");
	printf("Enter a number: ");
	scanf("%d",&num);
	switch(num%2)
	{
		case 0:
			printf("%d is even No.\n",num);
			break;
		default:
			printf("%d is odd No. \n",num);
	}
	return 0;
}