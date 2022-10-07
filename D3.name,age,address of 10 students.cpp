#include <iostream>

using namespace std;

class Student {
	private:
		string name;
		int age;
		string address;
	public:
		Student() {
			name = "unknown";
			age = 0;
			address = "not available";
		}
		void setInfo(string name, int age) {
			this -> name = name;
			this -> age = age;
		}
		void setInfo(string name, int age, string address) {
			this -> name = name;
			this -> age = age;
			this -> address = address;
		}
		void print() {
			cout << "Name: " << name << endl;
			cout << "Age: " << age << endl;
			cout << "Address: " << address << endl;
		}
};

int main() {
	int n;
	cout << "Enter the number of students: ";
	cin >> n;
	Student students[n];
	for(int i=0; i<n; i++) {
		string name;
		int age;
		string address;
		cout << "Enter name of student " << i+1 << ": ";
		cin >> name;
		cout << "Enter age of student " << i+1 << ": ";
		cin >> age;
		cout << "Enter address of student " << i+1 << ": ";
		cin >> address;
		students[i].setInfo(name, age, address);
	}
	for(int i=0; i<n; i++) {
		cout << "Student " << i+1 << ":" << endl;
		students[i].print();
	}
	return 0;
}