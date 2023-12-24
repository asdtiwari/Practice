/*WAP OOPs based to add two number of different datatype to illustrate the example of function overloading*/
#include<iostream>
using namespace std;
class Add
{
	private:
		int x,y,i;
		float f;
		double d;
	public:
		void Sum()
		{
			cout<<"\nEnter two number\n";
			cin>>x>>y;
			i=x+y;
			cout<<"\nAddition of given integers are "<<i;
		}
		void Sum(int x,int y)
		{
			i=x+y;
			cout<<"\nAddition of integers are "<<i;			
		}
		void Sum(float x,float y)
		{
			f=x+y;
			cout<<"\nAddition of floatings are "<<f;
		}
		void Sum(double x,double y)
		{
			d=x+y;
			cout<<"\nAddition of doubles are "<<d;
		}
};
int main()
{
	Add obj;
	obj.Sum();
	obj.Sum(5,8);
	obj.Sum(1.5f,2.6f);
	obj.Sum(22.55,27.29);
}