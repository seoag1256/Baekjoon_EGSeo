#include<iostream>
using namespace std;

int main()
{
	int year;
	int n;

	cin >> year;

	if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
		n = 1;
	else
		n = 0;

	cout << n << endl;
}