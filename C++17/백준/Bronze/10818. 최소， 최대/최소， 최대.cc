#include<iostream>
using namespace std;

int main()
{
	int array[1000000] = {};  
	int size; 
	int n, m = 0;

	cin >> size;

	for (int i = 0; i < size; i++) {
		cin >> array[i];
	}

	int min = array[0];
	int max = array[0];

	for (int i = 0; i < size - 1; i++) {

		if (array[i] > array[i + 1]) {  // 최소
			min = array[i + 1];
		}
		else {
			n = array[i + 1];
			array[i + 1] = array[i];
			array[i] = n;
			min = array[i + 1];
		}
	}
	cout << min << " ";

	for (int i = 0; i < size-1; i++) {
		if (array[i] < array[i+1]) {  // 최대
			max = array[i + 1];
		}
		else {
			n = array[i + 1];
			array[i+1] = array[i];
			array[i] = n;
			max = array[i+1];
		}

	}
	cout << max;
}