//WAP to print even numbers upto 20
#include<stdio.h>
int main(void)
{
	int i;
	printf("\n Even 0-20 \n");
	for(i=0;i<=20;i++)
		if(!(i%2))
			printf(" %d ",i);
	return 0;
}