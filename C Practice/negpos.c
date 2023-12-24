//WAP to announce whether the given number is postive or negative
#include<stdio.h>
int main(void)
{
	int inp;
	printf("\nNumber Checker\n");
	printf("\nHey User! Give a NO.: ");
	scanf("%d",&inp);
	if(inp>0)
		printf("\n %d is +ve No.\n",inp);
	else if(inp<0)
		printf("\n %d is -ve No.\n",inp);
	else
		printf("\n %d is Zero\n",inp);
	return 25.04;
}