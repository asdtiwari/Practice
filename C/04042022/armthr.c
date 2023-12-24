//to check the given three digit integer is armstong number or not
#include<stdio.h>
void main()
{
	int i,o,t,h,r;
	printf("Enter a three digit integer to know wheather it is armstrong or not\n\t");
	scanf("%d",&i);
	if (i>=100 && i<=999 || i<=-100 && i>=-999)
	{
		h=i/100;
		t=(i/10)%10;
		o=(i%10);
		r=(h*h*h)+(t*t*t)+(o*o*o);
		if (r==i)
		{
			printf("%d is armstrong number",i);
		}
		if (r!=i)
		{
			printf("%d is not armstrong number",i);
		}
	}
	if ((i<100 || i>999) && (i<=-100 || i>=-999))
	{
		printf("%d is not three digit number",i);
	}
}