#include<iostream>
#include <string>
using namespace std;

int main()
{
	string str;
	cin >> str;

	for (int i = 97; i < 123; i++) {
		int k = -1;
		for (int n = 0; n < str.length(); n++) {			
			if ((char)i == str[n]) {
				cout << n << " ";
				k = n;
				break;
			}
		}
		if (k == -1) {
			cout << k << " ";
		}
	}

}