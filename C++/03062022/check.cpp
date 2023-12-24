/*Check Program */
#include<iostream>
#include<time>
using namespace std;
int main()
{
	int a,b,c;
	label:
	cout<<"Input ";
	if((cin>>a)==0)
	{
		goto label;
	}
	cout<<"Perfect ";
	cout<<"\n"<<a<<endl<<b<<endl<<c;
}