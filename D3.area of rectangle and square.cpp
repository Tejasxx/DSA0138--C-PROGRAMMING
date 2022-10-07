#include <iostream>
using namespace std;

class Area {
	public:

		void printArea(int length, int breadth) {
			cout << "Area of Rectangle is: " << length*breadth<<endl;
		}

		void printArea(int side) {
			cout << "Area of Square is: " << side*side;
		}
};

int main() {
	Area obj;

	obj.printArea(5, 2);
	obj.printArea(5);

	return 0;
}