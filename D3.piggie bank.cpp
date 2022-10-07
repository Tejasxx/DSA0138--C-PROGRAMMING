#include <iostream>
using namespace std;

class AddAmount {
	private:
		int amount;
	public:
		AddAmount() : amount(50)
		{ }
		AddAmount(int x) : amount(x)
		{ }
		int getAmount() {
			return amount;
		}
};

int main() {
	AddAmount obj1;
	AddAmount obj2(75);
	cout<<"\nPiggy bank 1 contains "<<obj1.getAmount()<<" cents.\n";
	cout<<"\nPiggy bank 2 contains "<<obj2.getAmount()<<" cents.\n";
	return 0;
}