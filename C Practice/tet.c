// WAP to check the number is odd & even
#include<stdio.h>
int main()
{
	int no;
	printf("\n odd & even \n");
	printf("\n enter the number. ");
	scanf("%d",&no);
	if(no%2==0)
		printf("\n %d is odd no.",no);
	else
		printf("\n %d is even no.",no);
	return 0;
}