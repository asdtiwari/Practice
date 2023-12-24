/*Add methods in saved header file*/
#include<iostream>
#include"bankacct.h"
using namespace std;
class Methods:public Bank,public BankAccount
{
    public:
        char* get_bank_name()
        {
            return(&Bank_Name[0]);
        }
        char* get_bank_address()
        {
            return(&Bank_Address[0]);
        }
        int get_branch_code()
        {
            return(Branch_Code);
        }
        int get_account_number()
        {
            return(Account_Number);
        }
        char* get_account_holder()
        {
            return(&Account_Holder[0]);
        }
        int get_balance()
        {
            return(Account_Balance);
        }
};