/*Program to convert numbers into word*/
#include<iostream>
using namespace std;
int main()
{
	void tens(int);
	void rem(int);
	int i;
	cout<<"Enter a number ";
	cin>>i;
	if(i>=1000&&i<=99999)
	{
		if(i/1000>19)
		{
			tens(i/10000);
			i%=10000;
		}
		rem(i/1000);
		cout<<"Thousand ";
		i%=1000;
	}
	if(i>=100&&i<=999)
	{
		if(i==100)
		{
			cout<<"One Hundred";
		}
		else
		{
			rem(i/100);
			cout<<"Hundred and ";
			i%=100;
		}
	}
	if(i>=20)
	{
		tens(i/10);
		i%=10;
	}
	if(i<20)
	{
		rem(i);
	}	
}
void tens(int i)
{
	switch(i)
	{
		case 2:
			cout<<"Twenty ";
			break;
		case 3:
			cout<<"Thirty ";
			break;
		case 4:
			cout<<"Forty ";
			break;
		case 5:
			cout<<"Fifty ";
			break;
		case 6:
			cout<<"Sixty ";
			break;
		case 7:
			cout<<"Seventy ";
			break;
		case 8:
			cout<<"Eighty ";
			break;
		case 9:
			cout<<"Ninety ";
			break;
	}
}
void rem(int i)
{
	switch(i)
	{
		case 1:
			cout<<"One ";
			break;
		case 2:
			cout<<"Two ";
			break;
		case 3:
			cout<<"Three ";
			break;
		case 4:
			cout<<"Four ";
			break;
		case 5:
			cout<<"Five ";
			break;
		case 6:
			cout<<"Six ";
			break;
		case 7:
			cout<<"Seven ";
			break;
		case 8:
			cout<<"Eight ";
			break;
		case 9:
			cout<<"Nine ";
			break;
		case 10:
			cout<<"Ten ";
			break;
		case 11:
			cout<<"Eleven ";
			break;
		case 12:
			cout<<"Twelve ";
			break;
		case 13:
			cout<<"Thirteen ";
			break;
		case 14:
			cout<<"Fourteen ";
			break;
		case 15:
			cout<<"Fifteen ";
			break;
		case 16:
			cout<<"Sixteen ";
			break;
		case 17:
			cout<<"Seventeen ";
			break;
		case 18:
			cout<<"Eighteen ";
			break;
		case 19:
			cout<<"Nineteen ";
			break;
	}
}