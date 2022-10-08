#include<iostream>
using namespace std;
int main()
{
int i = 1, j, rows;
cout << "Number of line = ";
cin >> rows;
cout << "Right Angled Triangle Number Pattern\n"; 
while(i <= rows)
{
j = 1;
while( j <= i)
{
cout << i << " ";
j++;
}
cout << "\n";
i++;
}		
return 0;
}

