#include<iostream>
using namespace std;
class RBI {
	protected:
		int min_int_rate;
		int min_bal;
		int max_withdrawal;
	public:
		void set_data(int a,int b,int c) {
			min_int_rate=a;
			min_bal=b;
			max_withdrawal=c;
		}
};
class SBI:public RBI {
	public:
		void get_data() {
			set_data(4,500,10000);
		}
		void show_data() {
			cout<<"\nMinimum Interest Rate: "<<min_int_rate<<"%";
			cout<<"\nMinimum Balance Allowed: Rs"<<min_bal;
			cout<<"\nMaximum Withdrawal Allowed: Rs"<<max_withdrawal;
		}
};
class ICICI:public RBI {
	public:
		void get_data() {
			set_data(4,1000,20000);
		}
		void show_data() {
			cout<<"\nMinimum Interest Rate: "<<min_int_rate<<"%";
			cout<<"\nMinimum Balance Allowed: Rs"<<min_bal;
			cout<<"\nMaximum Withdrawal Allowed: Rs"<<max_withdrawal;
		}
};
class PNB:public RBI {
	public:
		void get_data() {
			set_data(5,2000,30000);
		}
		void show_data() {
			cout<<"\nMinimum Interest Rate: "<<min_int_rate<<"%";
			cout<<"\nMinimum Balance Allowed: Rs"<<min_bal;
			cout<<"\nMaximum Withdrawal Allowed: Rs"<<max_withdrawal;
		}
};
int main() {
	SBI obj1;
	ICICI obj2;
	PNB obj3;
	obj1.get_data();
	obj2.get_data();
	obj3.get_data();
	obj1.show_data();
	obj2.show_data();
	obj3.show_data();
	return 0;
}