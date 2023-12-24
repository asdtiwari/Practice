//print armstrong number from 100 to 999
#include<stdio.h>
void main()
{
	int i,o,t,h;
	for(i=100;i<=999;i++)
	{
		h=i/100;
		t=(i/10)%10;
		o=i%10;
		if(((h*h*h)+(t*t*t)+(o*o*o))==i)
		{
			printf("%d\t",i);
		}
	}
}