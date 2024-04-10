#include<iostream>
using namespace std;

int main()
{
	int Array[100] = { };
	int N, M;
	int first, end;
	int serve;
	cin >> N >> M;

	for (int i = 1; i <= N ; i++) {
		Array[i] = i;
	}

	for (int i = 0; i < M; i++) {
		cin >> first >> end;
		for (int k = 0; k < (end - first + 1) / 2; k++) {
			serve = Array[first + k];
			Array[first + k] = Array[end- k];
			Array[end- k] = serve;
		}
	}
	for (int i = 1; i <= N; i++) {
		cout << Array[i] << " ";
	}

}