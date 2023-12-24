/*Example of unary operator overloading*/
#include<iostream>
using namespace std;
class Increment
{
	private:
		int x,y;
	public:
		void in()
		{
			cout<<"\nEnter the value of x ";
			cin>>x;
			cout<<"\nEnter the value of y ";
			cin>>y;
		}
		void out()
		{
			cout<<"\nValue of x "<<x;
			cout<<"\nValue of y "<<y;
		}
		void operator ++()
		{
			++x;
			++y;
			cout<<"\nPrefix operator executed";
		}
		void operator ++(int d)
		{
			x++;
			y++;
			cout<<"\nPostfix operator executed";
		}
};
int main()
{
	Increment obj;
	obj.in();
	obj++;
	obj.out();
	obj.in();
	++obj;
	obj.out();
}