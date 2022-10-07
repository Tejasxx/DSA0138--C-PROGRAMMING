#include <iostream>
using namespace std;

class Degree {
	public:
		virtual void getDegree() {
			cout << "I got a degree";
		}
};

class Undergraduate : public Degree {
	public:
		void getDegree() {
			cout << "I am an Undergraduate"<<endl;
		}
};

class Postgraduate : public Degree {
	public:
		void getDegree() {
			cout << "I am a Postgraduate";
		}
};

int main() {
	Degree* d;
	Undergraduate u;
	Postgraduate p;
	d = &u;
	d->getDegree();
	d = &p;
	d->getDegree();
	return 0;
}