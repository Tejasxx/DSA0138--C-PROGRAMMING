#include <iostream>
using namespace std;

class Fruit {
	public:
		int numFruits;

		Fruit() {
			numFruits = 0;
		}

		void addFruit() {
			numFruits++;
		}

		int getNumFruits() {
			return numFruits;
		}
};

class Apple : public Fruit {
	public:
		Apple() {
			addFruit();
		}
};

class Mango : public Fruit {
	public:
		Mango() {
			addFruit();
		}
};

int main() {
	Fruit basket;
	Apple a;
	Mango m;

	cout << "There are " << a.getNumFruits() << " apples in the basket." << endl;
	cout << "There are " << m.getNumFruits() << " mangoes in the basket." << endl;
	cout << "There are " << basket.getNumFruits() << " fruits in the basket." << endl;

	return 0;
}