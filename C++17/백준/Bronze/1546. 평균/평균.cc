#include<iostream>
using namespace std;

int main()
{
	double subject[1001] = { };
	int N;

	cin >> N;

	for (int i = 0; i < N; i++) {
		cin >> subject[i];
	}
	
	float max = 0;

	for (int i = 0; i < N; i++) {
		if (max < subject[i]) {
			max = subject[i];
		}
	}

	double sum = 0;

	for (int i = 0; i < N; i++) {
		sum = sum + (subject[i] / max * 100);	
	}

	cout << (sum / N) << endl;


}