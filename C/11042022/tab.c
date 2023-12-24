//print table of any number
#include<stdio.h>
void main()
{
	int i,j=1,k;
	printf("Enter a number to know it's table ");
	scanf("%d",&i);
	while(j<=10)
	{
		k=i*j;
		printf("%d * %d = %d\n",i,j,k);
		j++;
	}
}