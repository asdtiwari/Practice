/*Add modifiers methods in saved header file*/
#include<iostream>
#include"methods.h"
using namespace std;
class Modifiers:public Methods
{
    private:
        int Debit,Credit;
    public:
        void set_bank_name()
        {
            cout<<"\nEnter the name of Bank\n";
            cin>>Bank_Name;
        }
        void set_bank_address()
        {
            cout<<"\nEnter the address of book\n";
            cin>>Bank_Address;
        }
        void set_branch_code()
        {
            cout<<"\nEnter the code of branch\n";
            cin>>Branch_Code;
        }
        void set_account_number()
        {
            cout<<"\nEnter the account number\n";
            cin>>Account_Number;
        }
        void set_account_holder()
        {
            cout<<"\nEnter account holder name\n";
            cin>>Account_Holder;
        }
        void deposit()
        {
            cout<<"\nEnter Credit amount\n";
            cin>>Credit;
            Account_Balance+=Credit;
        }
        void withdrawal()
        {
            cout<<"\nEnter debit amount\n";
            cin>>Debit;
            Account_Balance-=Debit;
        }
};