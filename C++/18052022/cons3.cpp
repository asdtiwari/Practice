/*WAP OPPs based to illustrate the example of parametric constructor*/
#include<iostream>
using namespace std;
class A
{
	private:
		int x,y,z;
	public:
		A(int a, int b)
		{
			x=a;
			y=b;
			cout<<"\nParametric constructer is executed";
		}
		void sum()
		{
			z=x+y;
			cout<<"\nAdditon is "<<z;
		}
};
int main()
{
	A obj1(5,7);
	obj1.sum();
	A obj2(15,12);
	obj2.sum();
}