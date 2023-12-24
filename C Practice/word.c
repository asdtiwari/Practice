/*WAP that receives an integer (less than or equal to nine digits in length) and prints out the number in words. For example, if the number input is 12342, then the output should be Twelve Thousand Three Hundred Forty Two.*/
/*Author: ASDT Date: January 30, 2023*/
//------------------------------------
#include<stdio.h>
//------------------------------------
char * once(int i)
{
	char *o[]={"Zero","One","Two","Three","Four","Five","Six","Seven","Eight","Nine","Ten","Eleven","Twelve","Thirteen","Fourteen","Fifteen","Sixteen","Seventeen","Eighteen","Nineteen"};
	return o[i];
}
//------------------------------------
char * tens(int i)
{
	char *t[]={"Zero","Ten","Twenty","Thirty","Forty","Fifty","Sixty","Seventy","Eighty","Ninety"};
	return t[i];
}
//------------------------------------
void run(long long unsigned int in)
{
	char *hundred="Hundred",*thousand="Thousand",*million="Million";
	register short i=0,len,flag=0;
	if(in>999999999)
		printf("\nRange Beyond Limit\n");
	else
	{
		if(in==0)
			printf("%s ",once(in));
		if(in>=100000000)
		{
			printf("%s %s ",once(in/100000000),hundred);
			in%=100000000;
			flag=1;
		}
		if(in>19000000)
		{
			printf("%s ",tens(in/10000000));
			in%=10000000;
			flag=1;
		}
		if(in>999999)
		{
			printf("%s ",once(in/1000000));
			in%=1000000;
			flag=1;
		}
		if(flag==1)
			printf("%s ",million);
		if(in>=100000)
		{
			printf("%s %s ",once(in/100000),hundred);
			in%=100000;
			flag=2;
		}
		if(in>19000)
		{
			printf("%s ",tens(in/10000));
			in%=10000;
			flag=2;
		}
		if(in>999)
		{
			printf("%s ",once(in/1000));
			in%=1000;
			flag=2;
		}
		if(flag==2)
			printf("%s ",thousand);
		if(in>=100)
		{
			printf("%s %s ",once(in/100),hundred);
			in%=100;
		}
		if(in>19)
		{
			printf("%s ",tens(in/10));
			in%=10;
		}
		if(in>0)
			printf("%s ",once(in));
	}
	printf("\n");
	return;
}
//------------------------------------
int main(void)
{
	long long unsigned int in,i;
	printf("\nNumeric to Word\n");
	printf("\nEnter a number(upto 9 digit): ");
	scanf("%llu",&in);
	for(i=0;i<=in;i++)
		run(i);
	return 0;
}