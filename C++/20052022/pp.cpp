/*Print Pattern
1
3  5
7  9 11
1  3  5  7
9 11  1  3 5
7  9 11  1 3 5*/
#include<iostream>
using namespace std;
int main()
{
	int rows,column,odd=0,input;
	cout<<"\nEnter number of rows ";
	cin>>input;
	for(rows=1;rows<=input;rows++)
	{
		column=1;
		while(column<=rows)
		{
			if(odd==11)
			{
				odd=0;
			}
			odd++;
			if(odd%2!=0)
			{
				cout<<odd<<" ";
				column++;
			}
		}
		cout<<endl;
	}
}