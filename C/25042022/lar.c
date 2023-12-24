/*Store 10 values inside array and find largest ones*/
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
		if(a[i]>s)
		{
			s=a[i];
		}
	}
	printf("Largest is %d",s);
}