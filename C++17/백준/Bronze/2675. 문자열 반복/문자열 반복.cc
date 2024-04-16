#include<iostream>
#include <string>
using namespace std;

int main()
{
	int test = 0;
	cin >> test;

	for (int i = 0; i < test; i++) {
		int repeat = 0;
		string str = " ";
		cin >> repeat;
		cin >> str;

		for (int n = 0; n < str.length(); n++) {
			for (int m = 0; m < repeat; m++) {
				cout << str[n];
			}
		}
		cout << "\n";
	}
}