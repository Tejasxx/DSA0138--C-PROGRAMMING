#include <iostream>
using namespace std;

class A {
	protected:
		int x, y;
	public:
		void getdata() {
			cout << "Enter two numbers: ";
			cin >> x >> y;
		}
};

class B: public A {
	public:
		void sum() {
			cout << "Sum is " << x+y<<endl;
		}
};

class C: public A {
	public:
		void product() {
			cout << "Product is " << x*y;
		}
};

int main() {
	B obj1;
	C obj2;
	obj1.getdata();
	obj2.getdata();
	obj1.sum();
	obj2.product();
	return 0;
}