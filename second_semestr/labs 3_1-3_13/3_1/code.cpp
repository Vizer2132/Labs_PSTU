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
	
	int N = 5;
	int arr[100];
	
	for (int i = 0; i < N; i++) {
		arr[i] = ((float)rand() / RAND_MAX) * 100;
	}

	show(arr, N);
	int tmp;
	for (int i = 0; i < N/2; i++) {
		tmp = arr[N - i - 1];
		arr[N - i - 1] = arr[i];
		arr[i] = tmp;
	}
	show(arr, N);

}