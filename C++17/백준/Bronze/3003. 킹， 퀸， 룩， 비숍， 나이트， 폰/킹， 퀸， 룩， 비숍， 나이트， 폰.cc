#include<iostream>
#include <string>
using namespace std;

int main()
{
	int A[] = { 1, 1, 2, 2, 2, 8 };
	int B[6] = {};

	for (int i = 0; i < 6; i++) {
		cin >> B[i];
	}

	for (int i = 0; i < 6; i++) {
		A[i] = A[i] - B[i];
		cout << A[i] << " ";
	}
	
}