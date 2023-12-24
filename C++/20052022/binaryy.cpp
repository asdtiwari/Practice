/*WAP OPPs Based o illustrate the example of + binary operator*/
#include<iostream>
using namespace std;
class Addition
{
	private:
		int x,y;
	public:
		void in()
		{
			cout<<"Enter value of x ";
			cin>>x;
			cout<<"Enter value of y ";
			cin>>y;
		}
		void out()
		{
			cout<<"\nAdditon of x is "<<x;
			cout<<"\nAdditon of y is "<<y;
		}
		Addition operator +(Addition obj)
		{
			Addition tmp;
			tmp.x=x+obj.x;
			tmp.y=y+obj.y;
			return(tmp); 
		}
};
int main()
{
	Addition obj1,obj2,obj3;
	obj1.in();
	obj2.in();
	obj3=obj1+obj2;
	obj3.out();
}