#include<iostream>
using namespace std;

int main()
{
	int count;
	cin >> count;

	for (int i = 1; i <= count; i++) {
		for (int j = 0; j < i; j++) {
			cout << "*";
		}
		cout << "\n";
	}
}