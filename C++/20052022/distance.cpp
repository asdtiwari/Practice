/*WAP OOPs based to Add of two distance by using binary operator overloading*/
#include<iostream>
using namespace std;
class Distance
{
	private:
		int feet,inch;
	public:
		void in()
		{
			cout<<"Enter the distance in feet and inch ";
			cin>>feet>>inch;
		}
		void out()
		{
			if(inch>=12)
			{
				feet+=inch/12;
				inch%=12;
			}
			cout<<"\nAddition is "<<feet<<"ft "<<inch<<"in";
		}
		Distance operator +(Distance obj)
		{
			Distance tmp;
			tmp.feet=feet+obj.feet;
			tmp.inch=inch+obj.inch;
			return(tmp);
		}
};
int main()
{
	Distance obj1,obj2,obj3;
	obj1.in();
	obj2.in();
	obj3=obj1+obj2;
	obj3.out();
}