//Store 10 number in array and count even and odd also print
#include<stdio.h>
void main()
{
	int a[10],i,j=0,k=0;
	printf("Enter 10 value in Array ");
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<10;i++)
	{
		if(a[i]%2==0)
		{
			printf("Even %d\n",a[i]);
			j+=1;
		}
		else
		{
			printf("odd %d\n",a[i]);
			k+=1;
		}
	}
	printf("%d Even Numbers and %d Odd Numbers",j,k);
}