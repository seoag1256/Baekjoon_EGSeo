#include<iostream>
using namespace std;

int main()
{
	int hour;
	int minute;
	int ovenTime;
	cin >> hour >> minute;
	cin >> ovenTime;

	minute += ovenTime;

	if (minute >= 60) {
		hour += minute / 60;
		minute -= 60*(minute/60);	
	}
	if (hour >= 24) {
		hour -= 24;
	}
	cout << hour << " " << minute << endl;
}