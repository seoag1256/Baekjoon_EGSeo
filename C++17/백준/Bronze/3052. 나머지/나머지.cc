#include<iostream>
using namespace std;

int main()
{
	int number[10] = { };
	int remainArray[42] = { };
	int n = 0;

	for (int i = 0; i < 42; i++) {
		remainArray[i] = 43;
	}

	for (int i = 0; i < 10 ; i++) {
		cin >> number[i];
		remainArray[number[i] % 42] = number[i] % 42;
	}

	for (int i = 0; i < 42; i++) {
		if (remainArray[i] != 43) {
			n += 1;
		}
	}
	cout << n;

}