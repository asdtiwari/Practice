/*check output*/
#include<iostream>
using namespace std;
int iNum=25;
void DisplayNumber()
{
    int iNum=7;
    cout<<"Number = "<<iNum<<endl;
    cout<<"Number = " <<::iNum<<endl;
}
int main()
{
    int iNum =12;
    DisplayNumber();
    cout<<"Number = "<<iNum<<endl;
    cout<<"Number = "<<::iNum<<endl;
}