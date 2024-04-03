#include<iostream>
using namespace std;

int main()
{
	int array[100] = {};  // 배열 초기화
	int size;  // 배열의 길이
	int num;  // 개수를 구하고 싶은 정수
	int k = 0;  // 정수의 개수

	cin >> size;

	for (int i = 0; i < size; i++) {
		cin >> array[i];
	}

	cin >> num;

	for (int i = 0; i < size; i++) {
		if (array[i] == num) {
			k += 1;
		}
	}
	cout << k;
	
}