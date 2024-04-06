#include<iostream>
using namespace std;

int main()
{
	int N, M;
	int first, end, ball;

	cin >> N >> M;

	int array[100] = { };

	for (int i = 0; i < M; i++) {
		cin >> first >> end >> ball;
		for (int j = first; j <= end; j++) {
			for (int k = 1; k <= ball; k++) {
				array[j-1] = k;
			}		
		}
	}
	for (int h = 0; h < N; h++) {
		cout << array[h] << " ";
	}
}