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
		arr[i] = ((float)rand() / RAND_MAX) * 50;
	}

	show(arr, N);

	int mx = arr[0];
	int cmx = 1;

	for (int i = 1; i < N; i++) {
		if (mx < arr[i]) {
			cmx = 1;
			mx = arr[i];
		}
		else if (mx == arr[i]) 
			cmx++;

	}
	cout << endl;
	cout << cmx << " " << mx;
}