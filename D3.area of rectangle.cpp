#include <iostream>
using namespace std;

class Rectangle {
		int l, b;

	public:
		Rectangle() {
			l = 0;
			b = 0;
		}

		Rectangle(int x, int y) {
			l = x;
			b = y;
		}

		Rectangle(int x) {
			l = x;
			b = x;
		}

		int area() {
			return l*b;
		}

		void show() {
			cout << "Length = " << l << endl << "Breadth = " << b << endl << "Area = " << area();
		}
};

int main() {
	Rectangle obj1, obj2(3, 4), obj3(5);

	obj1.show();
	obj2.show();
	obj3.show();

	return 0;
}