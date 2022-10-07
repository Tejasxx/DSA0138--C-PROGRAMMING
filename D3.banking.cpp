#include <iostream>
using namespace std;
class Bank {
	public:
		virtual int getBalance()
		{
			return 0;
		}
};
class BankA : public Bank
{
	public:
		int getBalance()
		{
			return 1000;
		}
};
class BankB : public Bank
{
	public:
		int getBalance()
		{
			return 1500;
		}
};
class BankC : public Bank
{
	public:
		int getBalance()
		{
			return 2000;
		}
};
int main()
{
	BankA obj1;
	BankB obj2;
	BankC obj3;
	cout << "Bank A: " << obj1.getBalance() << endl;
	cout << "Bank B: " << obj2.getBalance() << endl;
	cout << "Bank C: " << obj3.getBalance() << endl;
	return 0;
}