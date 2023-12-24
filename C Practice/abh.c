//WAP to reverse a five digit number
#include<stdio.h>
int main()
{
	int inp,o,t,h,th,tt,out;
	printf("\n reverse integer \n");
	printf("\n give five digit no : ");
	scanf("%d",&inp);
	o=inp%10;
	t=(inp/10)%10;
	h=(inp/100)%10;
	th=(inp/1000)%10;
	tt=(inp/10000)%10;
	out=(o*10000)+(t*1000)+(h*100)+(th*10)+tt;
	printf("\n output : %d",out);
	return 0;
}