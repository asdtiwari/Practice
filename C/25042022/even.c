/*Store 10 number in array and print even element*/
#include<stdio.h>
void main()
{
	int a[10],i;
	printf("Enter 10 values in array ");
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Even Number ");
	for(i=0;i<10;i++)
	{
		if(a[i]%2==0)
		{
			printf("%d ",a[i]);
		}
	}
}