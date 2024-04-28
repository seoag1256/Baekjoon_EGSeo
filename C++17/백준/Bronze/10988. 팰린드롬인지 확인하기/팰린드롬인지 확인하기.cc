#include<iostream>
#include <string>
using namespace std;

int main()
{
	bool palindrome = false;
	string str;
	cin >> str;

	if (str.length() == 1) {
		palindrome = true;
	}
	else {
		for (int i = 0; i < str.length() / 2; i++) {
			if (str[i] == str[str.length() - 1 - i]) {
				palindrome = true;
			}
			else if (str[i] != str[str.length() - 1 - i]) {
				palindrome = false;
				break;
			}
		}
	}
	

	if (palindrome == true)
		cout << 1 << "\n";
	else if(palindrome == false)
		cout << 0 << "\n";
} 