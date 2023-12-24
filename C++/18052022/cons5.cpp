/*WAP OOPs based to illustrate the example of copy constructor*/
#include<iostream>
using namespace std;
class A
{
	private:
		int x,y,z;
	public:
		A(int a,int b)
		{
			x=a;
			y=b;
			cout<<"\nParametric Constructor is executed";
		}
		A(A &o)
		{
			x=o.x;
			y=o.y;
			cout<<"\nCopy Constructor is executed";
		}
		void sum()
		{
			z=x+y;
			cout<<"\nAddition is "<<z;
		}
};
int main()
{
	A obj1(5,6);
	obj1.sum();
	A obj2(7,8);
	obj2.sum();
	A obj3(obj2);
	obj3.sum();
}