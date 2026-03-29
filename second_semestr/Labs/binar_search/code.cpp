#include <iostream>

using namespace std;


int binarSearch(int arr[], int size, int num) {
	int start = 0;
	int end = size - 1;

	while (true) {
		if ((end - start == 1)) {
			if (arr[(start + end) / 2] == num) return (start + end) / 2;
			return -1;
		}
		if (arr[(start + end) / 2] <= num) {
			start = (start + end) / 2;
		}
		else {
			end = (start + end) / 2;
		}

		for (int i = start; i < end; i++) {
			cout << " " << arr[i];
		}
		cout << endl;
	}
}


int main() {
	setlocale(LC_ALL, "ru");

	const int size = 14;

	//				  0  1  2  3  4  5  6  7  8  9  10 11 12 13
	int arr[size] = { 0, 1, 1, 2, 3, 3, 3, 4, 5, 6, 6, 7, 8, 9 };

	cout << "  idx = " << binarSearch(arr, size, 6);


}