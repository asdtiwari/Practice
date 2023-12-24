//to check the given integer is armstong number or not
#include<stdio.h>
void main()
{
	int i,o,t,h,th,tt,r;
	printf("Enter an integer within the range of +-32768 to know wheather it is armstrong or not\n\t");
	scanf("%d",&i);
	if (i<-32768||i>32768)
	{
		printf("%d is beyond the limit of calculation",i);
	}
	if (i>=0 && i<=9 || i<=0 && i>=-9)
	{
		r=i*i;
		if (r==i)
		{
			printf("%d is armstrong number",i);
		}
		if (r!=i)
		{
			printf("%d is not armstrong number",i);
		}
	}
	if (i>=10 && i<=99 || i<=-10 && i>=-99)
	{
		t=i/10;
		o=i%10;
		r=(t*t)+(o*o);
		if (r==i)
		{
			printf("%d is armstrong number",i);
		}
		if (r!=i)
		{
			printf("%d is not armstrong number",i);
		}
	}
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
	if (i>=1000 && i<=9999 || i<=-1000 && i>=-9999)
	{
		th=i/1000;
		h=(i/100)%10;
		t=(i%100)/10;
		o=i%10;
		r=(th*th*th*th)+(h*h*h*h)+(t*t*t*t)+(o*o*o*o);
		if (r==i)
		{
			printf("%d is armstrong number",i);
		}
		if (r!=i)
		{
			printf("%d is not armstrong number",i);
		}
	}
	if (i>=10000 && i<=32768 || i<=-10000 && i>=-32768)
	{
		tt=i/10000;
		th=(i/1000)%10;
		h=(i/100)%100;
		t=(i%100)/10;
		o=i%10000;
		r=(tt*tt*tt*tt*tt)+(th*th*th*th*th)+(h*h*h*h*h)+(t*t*t*t*t)+(o*o*o*o*o);
		if (r==i)
		{
			printf("%d is armstrong number",i);
		}
		if (r!=i)
		{
			printf("%d is not armstrong number",i);
		}
	}
}