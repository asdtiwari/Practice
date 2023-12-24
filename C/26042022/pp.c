/*Print patter
1	4	27	256	...	n	*/
#include<stdio.h>
void main()
{
	int a,i,j,k;
	printf("Enter the value of n ");
	scanf("%d",&a);
	for(i=1;i<=a;i++)
	{
		k=1;
		for(j=1;j<=i;j++)
		{
			k*=i;
		}
		printf("%d\t",k);
	}
}