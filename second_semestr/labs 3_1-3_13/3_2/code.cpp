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
	int p = 2;
	int q = 4;


	for (int i = 0; i < N; i++) {
		arr[i] = ((float)rand() / RAND_MAX) * 100;
	}

	show(arr, N);

	int tmp;
	for (int i = p, j = 1; i < (q+p)/2; i++, j++) {
		tmp = arr[i];
		arr[i] = arr[q-j];
		arr[q-j] = tmp;
	}

	cout << endl;
	show(arr, N);

}