#include<bits/stdc++.h> 
using namespace std; 

class Student 
{ 
    string name; 
 
    public: 
    Student() 
    { 
        this->name = "Unknown"; 
    } 
    Student(string name) 
    { 
        this->name = name; 
    } 
    void display() 
    { 
        cout << "Name: " << this->name << endl; 
    } 
}; 

int main() 
{ 
    int n; 
    cout<<"Enter the number of students"<<endl;
    cin >> n; 
    Student *s = new Student[n]; 
    for (int i = 0; i < n; i++) 
    { 
        string name; 
        cout<<"Enter the name of the student"<<endl;
        cin >> name; 
        s[i] = Student(name); 
    } 
    cout<<"The details of the students are "<<endl;
    for (int i = 0; i < n; i++) 
    { 
        s[i].display(); 
    } 
    return 0; 
}