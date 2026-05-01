#include <iostream>
using namespace std;
class Account 
{
private:
    int accountNumber;
    double balance;
public:
    Account(int acc, double bal) 
	{
    accountNumber = acc;
    balance = bal;
    }
    Account operator+(Account obj)
	 {
    Account temp(0, 0);
    temp.balance = balance + obj.balance;
    temp.accountNumber = 780;
    return temp;
    }
    void display() 
	{
    cout << "Account Number: " << accountNumber << endl;
    cout << "Balance: " << balance << endl;
    }
};

int main()
 {
    Account a1(56,6000);
    Account a2(90,8900);
    Account a3 = a1 + a2;
    cout << "Combined Account:"<<endl;
    a3.display();
    return 0;
}