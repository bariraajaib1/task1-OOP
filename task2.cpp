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
    cout << "Enter Account Number: "<<endl;
    cin >> accountNumber;
    cout << "Enter Balance: "<<endl;
    cin >> balance;
    }
    void display() 
	{
    cout << "Account Number: " << accountNumber << endl;
    cout << "Balance: " << balance << endl;
    }
};
int main()
{
    Account a5;
    a5.input();
    a5.display();

    return 0;
}