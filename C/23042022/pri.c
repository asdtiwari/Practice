/*Print prime number between 1 and n*/
#include<stdio.h>
void main()
{
	int a=1,n,i,j,k;
	printf("Enter value of n ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		k=0;
		for(j=1;j<=i;j++)
		{
			if(i%j==0)
			{
				k+=1;
			}
		}
		if(k<=2)
		{
			printf("%d\t",i);
		}
	}
}