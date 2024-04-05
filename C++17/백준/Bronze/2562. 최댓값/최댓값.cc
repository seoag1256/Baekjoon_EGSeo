#include<iostream>
using namespace std;

int main()
{
	int array[9] = {};   
	int num = 1;

	for (int i = 0; i < sizeof(array)/sizeof(int); i++) {
		cin >> array[i];
	}

	int max = array[0];

	for (int i = 0; i < sizeof(array)/sizeof(int) - 1; i++) {
		if (array[i] < array[i + 1]) {
			max = array[i + 1];
			num = (i + 2);
		}
		else {
			array[i + 1] = array[i];

		}
		
	}
	cout << max << "\n" << num;
}