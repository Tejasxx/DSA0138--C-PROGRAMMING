#include <iostream> 
using namespace std; 
  
int main() 
{ 
    int n; 
    int arr[50];
    int sum=0;
    cout << "Enter any integer: "; 
    cin >> n; 
    cout << "Enter any " << n << " integer: "; 
    for(int i=0;i<n;i++)
    {
        cin >> arr[i];
    }
    for(int i=0;i<n;i++)
    {
        sum+=arr[i];
    }
    cout << "Sum of integers in array is: " << sum;
    return 0; 
}