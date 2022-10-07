#include <iostream>
using namespace std;

class Number;

class Sum {
	public:
		int add(int, int);
};

class Number {
	private:
		int a, b;

	public:
		Number(int n1, int n2) {
			a = n1;
			b = n2;
		}

		friend int Sum::add(int, int);
};

int Sum::add(int x, int y) {
	return (x + y);
}

int main() {
	int n1, n2;

	cout << "Enter two numbers: ";
	cin >> n1 >> n2;

	Number num(n1, n2);
	Sum obj;

	cout << "Sum of " << n1 << " and " << n2 << " = " << obj.add(n1, n2);

	return 0;
}