#include <iostream>
using namespace std;

int main() {
	srand(time(0));
	const int n = 10;
	float b;

	int a[n];

	int range_min = 0;
	int range_max = 50;

	for (int i = 0; i < n; i++) {
		a[i] = ((float)rand() / RAND_MAX) * (range_max - range_min) + range_min;
		cout << a[i] << " ";
	}
	cout << endl;

	for (int j = 0; j < n-1; j++) {
		for (int i = 0; i < n-j-1; i++) {
			if (a[i] > a[i + 1]) {
				b = a[i];
				a[i] = a[i + 1];
				a[i + 1] = b;
			}
		}
	}

	for (int i = 0; i < n; i++) {
		cout << a[i] << " ";
	}
	cout << endl;
	return 0;
}