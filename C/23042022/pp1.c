/*Print Pattern
1	4	27	256	3125	.....n	*/
#include<stdio.h>
void main()
{
	int n,a,i,j;
	printf("Enter number of terms ");
	scanf("%d",&n);
	for(a=1;a<=n;a++)
	{
		j=1;
		for(i=1;i<=a;i++)
		{
			j=j*a;
		}
		printf("%d\t",j);
	}
}