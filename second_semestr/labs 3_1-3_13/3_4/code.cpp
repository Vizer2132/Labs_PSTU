#include <iostream>
using namespace std;

void show(int arr[100], int N) {
	for (int i = 0; i < N; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
}

int main() {
	srand(time(0));
	
	int N = 6;
	int arr[100];

	for (int i = 0; i < N; i++) {
		arr[i] = ((float)rand() / RAND_MAX) * 5;
	}

	show(arr, N);

	int tmp = arr[0];
	int c = 1;
	for (int i = 1; i < N; i++) {
		if (arr[i] > tmp) c++;
		else break;
		tmp = arr[i];
	}
	if (c == N) cout << "yes";
	else cout << "no";

	cout << endl;
}