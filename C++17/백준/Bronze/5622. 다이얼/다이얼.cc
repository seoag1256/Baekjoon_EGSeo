#include<iostream>
#include <string>
using namespace std;

int main()
{
	int time = 0;
	string str = " ";
	cin >> str;

	for (int i = 0; i < str.length(); i++) {
		if (64 < int(str[i]) && int(str[i]) < 68) {
			time += 3;
		}
		else if (67 < int(str[i]) && int(str[i]) < 71) {
			time += 4;
		}
		else if (70 < int(str[i]) && int(str[i]) < 74) {
			time += 5;
		}
		else if (73 < int(str[i]) && int(str[i]) < 77) {
			time += 6;
		}
		else if (76 < int(str[i]) && int(str[i]) < 80) {
			time += 7;
		}
		else if (79 < int(str[i]) && int(str[i]) < 84) {
			time += 8;
		}
		else if (83 < int(str[i]) && int(str[i]) < 87) {
			time += 9;
		}
		else if (86 < int(str[i]) && int(str[i]) < 91) {
			time += 10;
		}
	}

	cout << time;
}