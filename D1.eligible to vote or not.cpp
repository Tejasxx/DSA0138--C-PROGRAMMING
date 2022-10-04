#include<iostream> 
using namespace std; 
int main() 
{ 
 int age; 
 cout<<"Enter your age:"<<endl; 
 cin>>age; 
 age>=18?cout<<"Eligible to vote!":cout<<"Not eligible to vote!!"; 
 if(age<0)
 cout<<"invalid input:";
 return 0; 
} 