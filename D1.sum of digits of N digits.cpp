#include<iostream>
using namespace std;
int main() {
	int n,num,sum=0;
	cout<<"Enter N value : "<<endl;
	cin>>n;
	cout<<"Enter "<<n<<" digit number :"<<endl;
	cin>>num;
	while(num!=0) {
		sum=sum+num%10;
		num=num/10;
	}
	cout<<"Sum of "<<n<<" digit number : "<<sum<<endl;
	return 0;
}