#include <iostream>

using namespace std;
class Account;
class Bank{
private:
    string name= "John Doe", location= "Dhaka", branchName= "Dhanmondi";
public:
    friend void bank(Bank obj1, Account obj2);
};
class Account{
private:
    int accNum, balance, dep;
public:
    friend void bank(Bank obj1, Account obj2);
    friend void show(Account obj2);
    void deposit()
    {
        cout << "Please enter the amount to deposit: ";
        cin >> dep;
        balance+=dep;
    }
};
void bank(Bank obj1, Account obj2)
{
    cout<< "Enter account number: ";
    cin >> obj2.accNum;
    cout << "Enter balance: ";
    cin >> obj2.balance;
    cout << "Name: "<< obj1.name << endl <<"Location: "<< obj1.location << endl << "Branch Name: "<< obj1.branchName<<endl;
    cout << "Account number:"<< obj2.accNum<< endl << "Balance:" << obj2.balance<< endl;
}
void show(Account obj2)
{
    cout << "Account number:"<< obj2.accNum<< endl
    cout << "Current account balance: " << obj2.balance<<endl;
}
int main()
{
    char choice;
    Bank obj1;
    Account obj2;
    bank(obj1, obj2);
    DEFAULT:
    cout << "Do you want to deposit money? Press y for yes and n for no"<<endl;
    cin << choice;
    if (choice==y)
    {
        obj2.deposit();
        show();
    }
    else if (choice==n)
        cout<<"Thanks,have a nice day"<<endl;
    else
       {
        cout<<"Wrong choice please try again"<<endl;
        goto DEFAULT;
       }
    return 0;
}
