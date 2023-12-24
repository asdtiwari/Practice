//check a four digit number wheather it is armstrong or not
#include<stdio.h>
void main()
{
	int i,o,t,h,th,a;
	printf("Enter a four digit number to check wheather it is armstrong or not ");
	scanf("%d",&i);
	if (i>9999||i<1000)
	{
		printf("%d is not four digit number",i);
	}
	else
	{
		th=i/1000;
		h=(i/100)%10;
		t=(i%100)/10;
		o=(i%10);
		a=(th*th*th*th)+(h*h*h*h)+(t*t*t*t)+(o*o*o*o);
		if(i==a)
		{
			printf("%d is armstrong number",i);
		}
		else
		{
			printf("%d is not armstrong number",i);
		}
	}
}