#include <iostream>
using namespace std;
class PrintNumber {
	public:
		void printn(int x) {
			cout << "Printing int: " << x << endl;
		}
		void printn(double x) {
			cout << "Printing double: " << x << endl;
		}
		void printn(string x) {
			cout << "Printing string: " << x << endl;
		}
};
int main() {
	PrintNumber pn;
	pn.printn(5);
	pn.printn(500.263);
	pn.printn("Hello C++");
	return 0;
}