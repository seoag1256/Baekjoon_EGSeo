#include<iostream>
using namespace std;

int main()
{
	int num1, num2, num3;
	int money;
	int Num;
	cin >> num1 >> num2 >> num3;

	if (num1 == num2 && num2 == num3) {
		Num = num1;
		money = 10000 + (Num * 1000);
	}
	else if (num1 == num2 && num1 != num3 || num1 == num3 && num1 != num2) {
		money = 1000 + (num1 * 100);
	}
	else if (num2 == num3 && num2 != num1) {
		money = 1000 + (num2 * 100);
	}
	else {
		if (num1 > num2 && num1 > num3)
			Num = num1;
		else if (num2 > num1 && num2 > num3)
			Num = num2;
		else
			Num = num3;
		money = Num * 100;
	}
	cout << money << endl;

}