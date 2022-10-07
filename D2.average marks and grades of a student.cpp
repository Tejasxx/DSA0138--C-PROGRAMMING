#include<iostream>
using namespace std;
class Student {
	public:
		string name;
		int regno;
		int marks1,marks2,marks3;
		int avgmarks;
		char grade;
		void readData() {
			cout<<"Enter the student name: ";
			cin>>name;
			cout<<"Enter the student reg no: ";
			cin>>regno;
			cout<<"Enter the student three subject marks: ";
			cin>>marks1>>marks2>>marks3;
		}
		void calculate() {
			avgmarks=(marks1+marks2+marks3)/3;
			if(avgmarks>=90) {
				grade='A';
			} else if(avgmarks>=70) {
				grade='B';
			} else if(avgmarks>=50) {
				grade='C';
			} else {
				grade='F';
			}
		}
		void displayData() {
			cout<<"Average of student"<<" "<<name<<" "<<"is"<<" "<<avgmarks<<endl;
			cout<<"Grade of student"<<" "<<name<<" "<<"is"<<" "<<grade<<endl;
		}
};
int main() {
	Student s[3];
	for(int i=0; i<3; i++) {
		s[i].readData();
	}
	for(int i=0; i<3; i++) {
		s[i].calculate();
	}
	for(int i=0; i<3; i++) {
		s[i].displayData();
	}
	return 0;
}