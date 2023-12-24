/*Store 10 number in array and calculate sum*/
#include<stdio.h>
void main()
{
	int a[10],i,s=0;
	printf("Enter 10 values inside array ");
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<10;i++)
	{
		printf("%d ",a[i]);
		s+=a[i];
	}
	printf("\nSum of digits is %d",s);
}