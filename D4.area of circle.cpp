#include <iostream>
using namespace std;

int main() {
	float r, pi, a;
	pi = 3.14;
	cout << "Enter the radius of the circle ";
	cin >> r;
	a = pi * r * r;
	cout << "The area of the circle is " << a;
	return 0;
}