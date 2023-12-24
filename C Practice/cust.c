//Illustration of switch
#include<stdio.h>
int main(void)
{
	int opt;
	printf("\n Customer Care \n");
	printf("\nEnter your choice \nPress 1 for English \nHindi ke liye 2 dabaye \t");
	scanf("%d",&opt);
	switch(opt)
	{
		case 2:
			printf("\n Hindi \n");
			break;
		case 1:
			printf("\n English \n");
			break;
		default:
			printf(" :( Invalid Choice \n");
	}
	printf("\nExit..\n");
	return 0;
}