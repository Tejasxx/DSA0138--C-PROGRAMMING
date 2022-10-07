#include <iostream>
using namespace std;

class Employee
{
    private:
    int empNum;
    string empName;
    float basic, DA, PF, netsal;
    
    public:
    Employee()
    {
        empNum = 0;
        empName = " ";
        basic = 0;
        DA = 0;
        PF = 0;
        netsal = 0;
    }
    
    void getDetails()
    {
        cout << "Enter employee number : ";
        cin >> empNum;
        cout << "Enter employee name : ";
        cin >> empName;
        cout << "Enter basic salary : ";
        cin >> basic;
    }
    
    void calcSalary()
    {
        DA = 0.25*basic;
        PF = 0.05*basic;
        netsal = (basic+DA+basic*0.10)-PF;
    }
    
    void displayDetails()
    {
        cout << "Basic Salary : " << basic << "\n";
        cout << "DA(25% of Basic) : " << DA << "\n";
        cout << "HRA(10% of Basic) : " << basic*0.10 << "\n";
        cout << "PF(5% of Basic) : " << PF << "\n";
        cout << "Net Salary : " << netsal << "\n";
    }
};

int main()
{
    Employee e;
    e.getDetails();
    e.calcSalary();
    e.displayDetails();
}