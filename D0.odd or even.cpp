#include <iostream>
#include<conio.h>
using namespace std;

class print
{
	int num;
	public:
		print()
	
	{	
	cout<<"Enter an integer number: ";
	cin>>num;
}
void scan()
{
	if(num%2==0)
		cout<<num<<" is an EVEN number."<<endl;
	else
		cout<<num<<" is an ODD number."<<endl;
	}
	
};
int main()
{
	print obj;
	obj.scan();
	return 0;
}

