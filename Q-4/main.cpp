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
    int accNum, balance;
public:
    friend void bank(Bank obj1, Account obj2);
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
int main()
{
    Bank obj1;
    Account obj2;
    bank(obj1, obj2);
    return 0;
}
