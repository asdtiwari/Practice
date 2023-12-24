/*store 5-5 value in two array and merge in third array
like 	a 1 2 3 4 5
	b 5 6 7 8 9
	c 1 2 3 4 5 9 8 7 6 5	*/
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
	j=4;
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
			j--;
		}
	}
	for(k=0;k<10;k++)
	{
		printf("%d ",c[k]);
	}
}