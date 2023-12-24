/*program to calculate the sum of digit upto the sum become single digit*/
#include<stdio.h>
void main()
{
	int a,s=0,d;
	printf("Enter the number ");
	scanf("%d",&a);
	while(a>0||s>9)
	{
		if(a==0)
		{
			a=s;
			s=0;
		}
		d=a%10;
		s+=d;
		a/=10;
	}
	printf("Sum of digits is %d",s);
}