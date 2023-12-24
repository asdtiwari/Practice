/*Addition of two array*/
#include<stdio.h>
void main()
{
	int a[5],b[5],c[5],i;
	printf("Enter 5 values in first array ");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter 5 values in second array ");
	for(i=0;i<5;i++)
	{
		scanf("%d",&b[i]);
	}
	for(i=0;i<5;i++)
	{
		c[i]=a[i]+b[i];
	}
	printf("Addition of Two Array ");
	for(i=0;i<5;i++)
	{
		printf("%d ",c[i]);
	}	
}