/*WAP OOPs based to illustrate the example of default constructor*/
#include<iostream>
using namespace std;
class A
{
	private:
		int x,y,z;
	public:
		A()
		{
			x=25;
			y=50;
			cout<<"\nDefault constructer is executed";
		}
		void sum()
		{
			z=x+y;
			cout<<"\nAddition of x and y is "<<z;
		}
};
int main()
{
	A obj1;
	obj1.sum();
	A obj2;
	obj2.sum();
}