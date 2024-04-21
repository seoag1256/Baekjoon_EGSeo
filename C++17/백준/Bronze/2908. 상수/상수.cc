#include<iostream>
#include <string>
using namespace std;

int main()
{
	string A, B;
	string max;
	cin >> A >> B;

	char p = A[0];
	A[0] = A[2];
	A[2] = p;

	char q = B[0];
	B[0] = B[2];
	B[2] = q;

	if (A[0] > B[0]) {
		max = A;
	}
	else if (A[0] < B[0]) {
		max = B;
	}
	else if (A[0] == B[0]) {
		if (A[1] > B[1]) {
			max = A;
		}
		else if (A[1] < B[1]) {
			max = B;
		}
		else if (A[1] == B[1]) {
			if (A[2] > B[2]) {
				max = A;
			}
			else if (A[2] < B[2]) {
				max = B;
			}
		}
	}

	cout << max;

}