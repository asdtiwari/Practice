/*run a program untill the user does not close it manually by using input user while loop controller*/
#include<stdio.h>
void main()
{
	int a,b,i=0,j;
	while(i!=1)
	{
		printf("Give the value of a and b to add it ");
		scanf("%d%d",&a,&b);
		j=a+b;
		printf("%d + %d = %d",a,b,j);
		printf("\nEnter 1 to close\nAnd other key for restart program\n\t");
		scanf("%d",&i);
	}
}