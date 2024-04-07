#include<iostream>
using namespace std;

int main()
{
	int N, M;
	int a, b;
	int z = 0;

	cin >> N >> M;

	int array[100] = { };

	for (int i = 0; i < N; i++) {
		array[i] = (i + 1);
	}

	for (int i = 0; i < M; i++) {
		cin >> a >> b;
		z = array[a-1];
		array[a-1] = array[b-1];
		array[b-1] = z;
	}
	for (int i = 0; i < N; i++) {
		cout << array[i] << " ";
	}

}