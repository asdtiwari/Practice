/*WAP OOPs based to store the data regarding to bank to illustrate the example of static variable and static method*/
#include<iostream>
using namespace std;
class Bank
{
	private:
		int balance,withdraw,deposit,account;
		char name[10];
		static int banktotal;
	public:
		void in()
		{
			cout<<"\nEnter the following details\nAccount No, Name, Opening balance\n";
			cin>>account>>name>>balance;
			banktotal+=balance;
		}
		void out()
		{
			cout<<"\nAccountNo\t"<<account<<"\nName\t"<<name<<"\nBalance\t"<<balance<<endl;
		}
		void Deposit()
		{
			cout<<"\nEnter the depositing amount\n";
			cin>>deposit;
			balance+=deposit;
			banktotal+=balance;
		}
		void Withdraw()
		{
			cout<<"\nEnter withdraw amount\n";
			cin>>withdraw;
			balance-=withdraw;
			banktotal-=withdraw;
		}
		static void bank()
		{
			cout<<"\nTotal collection of Bank is "<<banktotal<<endl;
		}
};
int Bank::banktotal;
int main()
{
	Bank cust1,cust2;
	cust1.in();
	cust2.in();
	cust1.Deposit();
	cust2.Deposit();
	cust1.Withdraw();
	cust2.Withdraw();
	cust1.out();
	cust2.out();
	Bank::bank();
}