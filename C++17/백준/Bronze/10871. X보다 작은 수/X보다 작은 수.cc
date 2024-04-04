#include<iostream>
using namespace std;

int main()
{
	int array[10000] = {};  
	int size; 
	int num;  

	cin >> size >> num;

	for (int i = 0; i < size; i++) {
		cin >> array[i];
	}

	for (int i = 0; i < size; i++) {
		if (array[i] < num) {
			cout << array[i] << " ";
		}
	}
	
}