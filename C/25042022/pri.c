/*Store 10 number in array and print prime number only */
#include<stdio.h>
void main()
{
	int a[10],i,j,s;
	printf("Enter 10 values inside Array ");
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Prime numbers ");
	for(i=0;i<10;i++)
	{
		s=0;
		for(j=1;j<a[i];j++)
		{
			if(a[i]%j==0)
			{
				s+=1;
			}
		}
		if(s<=2)
		{
			printf("%d ",a[i]);
		}
	}
}