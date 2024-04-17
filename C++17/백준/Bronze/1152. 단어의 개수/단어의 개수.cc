#include<iostream>
#include <string>
using namespace std;

int main()
{
	int num = 1;

	string str;
	getline(cin, str);

	for (int i = 0; i < str.length(); i++) {
		if (str[i] == ' ') {
			num++;
		}
	}
	if (str[0] == ' ') {
		num--;
	}
	if (str[str.length() - 1] == ' ') {
		num--;
	}

	cout << num;

}