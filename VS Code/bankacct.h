/*Store the following informations in header file*/
#include<iostream>
#include<stdio.h>
using namespace std;
class Bank
{
    protected:
        char Bank_Name[50];
        char Bank_Address[50];
        int Branch_Code;
    public:
        void input_bank()
        {
            cout<<"\nEnter the following details of bank\n";
            cout<<"Enter Bank Name\n";
            gets(Bank_Name);
            cout<<"Enter Bank Address\n";
            gets(Bank_Address);
            cout<<"Enter Bank Code\n";
            cin>>Branch_Code;
        }
};
class BankAccount
{
    protected:
        int Account_Number;
        char Account_Holder[20];
        float Account_Balance;
    public:
        void input_account()
        {
            cout<<"\nEnter the following details of Customer\n";
            cout<<"Enter Account Number\n";
            cin>>Account_Number;
            cout<<"Enter Account Holder Name\n";
            gets(Account_Holder);
            gets(Account_Holder);
            cout<<"Enter Account Balance\n";
            cin>>Account_Balance;
        }
};