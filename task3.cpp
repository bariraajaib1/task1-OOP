#include <iostream>
using namespace std;
class Account
 {
private:
    int accountNumber;
    double balance;
public:
    void input()
	{
    cout << "Enter Balance: ";
    cin >> balance;
    }
    void generateAccountNumber()
	{
    accountNumber = rand() % 1000;
    }
    void display()
	{
    cout << "Account Number: " << accountNumber << endl;
    cout << "Balance: " << balance << endl;
    }
};
int main()
 {
    srand(0);
    Account a0;
    a0.input();
    a0.generateAccountNumber();
    a0.display();
    return 0;
}