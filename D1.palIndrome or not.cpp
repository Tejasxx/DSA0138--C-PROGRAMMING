#include <bits/stdc++.h>
using namespace std;
string isPalindrome(string S)
{
	string P = S;
	reverse(P.begin(), P.end());
	if (S == P)  
	{
		return "Yes it is palindrome";
	}
	else 
	{
		return "No it is not the palindrome";
	}
}
int main()
{
	string S = "5678765";
	cout << isPalindrome(S);

	return 0;
}
