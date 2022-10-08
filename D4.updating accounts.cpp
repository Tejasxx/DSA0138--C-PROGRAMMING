#include<iostream>
using namespace std;
class person {
	public:
		string name;
		int age;
		string gender;
};
class account {
	public:
		long accno;
		string type;
		float balance;
};
class admin {
	public:
		string username;
		string password;
};
class master {
	public:
		person p;
		account a;
		admin ad;
};
int main() {
	master m;
	cout<<"Enter the name: ";
	cin>>m.p.name;
	cout<<"Enter the age: ";
	cin>>m.p.age;
	cout<<"Enter the gender: ";
	cin>>m.p.gender;
	cout<<"Enter the account number: ";
	cin>>m.a.accno;
	cout<<"Enter the account type: ";
	cin>>m.a.type;
	cout<<"Enter the balance: ";
	cin>>m.a.balance;
	cout<<"Enter the username: ";
	cin>>m.ad.username;
	cout<<"Enter the password: ";
	cin>>m.ad.password;
		
	cout<<"--------------------------------------\n";
	cout<< "updated information and displays as:";
	cout<<"\nName: "<<m.p.name<<"\nAge: "<<m.p.age<<"\nGender: "<<m.p.gender<<"\nAccount No.: "<<m.a.accno<<"\nAccount Type: "<<m.a.type<<"\nBalance: "<<m.a.balance<<"\nUsername: "<<m.ad.username<<"\nPassword: "<<m.ad.password;
	return 0;
}