#include<iostream>
#include <string>
using namespace std;

int main()
{
	int count;
	cin >> count;

	for (int i = 1; i <= count; i++) {
		for (int k = 0; k < count - i; k++) {
			cout << " ";
		}
		for (int j = 0; j < 2*i-1; j++) {
			cout << "*";
		}
		cout << "\n";
	}

	for (int i = 1; i <= count-1; i++) {
		for (int k = 1; k <= i; k++) {
			cout << " ";
		}
		for (int j = 0; j < 2*(count-i)-1; j++) {
			cout << "*";
		}
		cout << "\n";
	}
	
}