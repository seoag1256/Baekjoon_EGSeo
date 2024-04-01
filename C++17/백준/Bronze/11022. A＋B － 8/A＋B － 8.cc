#include<iostream>
using namespace std;

int main()
{
	int count;
	int num1, num2;

	cin >> count;

	for (int i = 0; i < count; i++) {
		cin >> num1 >> num2;
		cout << "Case #" << (i + 1) << "\: " << num1 << " + " << num2 << " = " << (num1 + num2) << endl;
	}

}