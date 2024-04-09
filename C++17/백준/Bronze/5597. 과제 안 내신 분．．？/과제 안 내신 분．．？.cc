#include<iostream>
using namespace std;

int main()
{
	int student[100] = { };
	int num;

	for (int i = 1; i <= 28 ; i++) {
		cin >> num;
		student[num] = num;
	}

	for (int i = 0; i < 30; i++) {
		if (student[i + 1] == 0) {
			cout << i + 1 <<"\n";
		}
	}
}