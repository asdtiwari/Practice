//WAP to check whether the given numberr is odd or even
#include<stdio.h>
int main(void)
{		//dis=shopp>1000?10%:10;
	int inp;
	printf("\nEven Odd\n");
	printf("\nEnter a NO.: ");
	scanf("%d",&inp);
	inp%2==0?printf("\n %d is even \n",inp):printf("\n %d is odd\n",inp);
	return 0;
}