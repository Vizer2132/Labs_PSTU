#include <iostream>

using namespace std;

int main() {
	int n, mx, elem;

	cin >> n;
	cin >> mx; // первый элемент последовательности, он сразу максимальный

	for (int i = 0; i < n - 1; i++) {
		cin >> elem;
		if (elem > mx) {
			mx = elem;
		}
	}
	cout << mx;

}