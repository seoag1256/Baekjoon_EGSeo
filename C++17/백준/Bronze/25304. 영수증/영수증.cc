#include<iostream>
using namespace std;

int main()
{
	int sum;
	int sort;
	int price, count;
	cin >> sum;
	cin >> sort;
	for (int i = 0; i < sort; i++) {
		cin >> price >> count;
		sum -= price * count;
	}
	if (sum == 0) {
		cout << "Yes" << endl;
	}
	else {
		cout << "No" << endl;
	}

}