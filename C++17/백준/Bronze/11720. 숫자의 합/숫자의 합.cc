#include<iostream>
#include <string>
using namespace std;

int main()
{
	int n;
	string str;
	int sum = 0;

	cin >> n;
	cin >> str;

	for (int i=0; i < n; i++) {
		char c = str[i];
		sum += c - '0';
	}

	cout << sum;
}