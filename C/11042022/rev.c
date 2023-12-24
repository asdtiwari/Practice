/*reverse any integer*/
#include<stdio.h>
void main()
{
	int h,i,j,k=0;
	printf("Enter a number to reverse it ");
	scanf("%d",&h);
	i=h;
	while(h>0)
	{
		j=h%10;
		k=k*10+j;
		h=h/10;
	}
	printf("Reverse of %d is %d",i,k);
}