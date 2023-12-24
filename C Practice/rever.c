//WAP to reverse a five digit number
#include<stdio.h>
int main(void)
{
	int inp,o,t,h,th,tt,out;
	printf("\n Reverse Integer \n");
	printf("\nGive 5 digit no: ");
	scanf("%d",&inp);	//12345
	o=inp%10;	//5
	t=(inp/10)%10;	//4
	h=(inp/100)%10;	//3
	th=(inp/1000)%10;//2
	tt=inp/10000;	//1
	out=(o*10000)+(t*1000)+(h*100)+(th*10)+tt;
	printf("\nReverse No: %d",out);
	return 0;
}