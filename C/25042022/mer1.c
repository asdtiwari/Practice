/*Store 5-5 number is two array and merge in third array
like 	a 4 5 6 1 2
	b 9 6 1 6 4
	c 4 5 6 1 2 9 6 1 6 4	*/
#include<stdio.h>
void main()
{
	int a[5],b[5],c[10],i,j,k;
	printf("Enter 5 values in first array ");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter 5 values in second array ");
	for(j=0;j<5;j++)
	{
		scanf("%d",&b[j]);
	}
	i=0;
	j=0;
	printf("Merge ");
	for(k=0;k<10;k++)
	{
		if(k<5)
		{
			c[k]=a[i];
			i++;
		}
		else
		{
			c[k]=b[j];
			j++;
		}
	}
	for(k=0;k<10;k++)
	{
		printf("%d ",c[k]);
	}
}