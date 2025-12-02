#include <iostream>
#include <cmath>

using namespace std;

int main() {
	setlocale(LC_ALL, "Rus");
	int n, elem, mn, mx;

	cin >> n;


	cin >> mn;
	mx = mn;
	for (size_t i = 0; i < n - 1; i++) {
		cin >> elem;

		if (elem < mn) {
			mn = elem;
		}
		if (elem > mx) {
			mx = elem;
		}
	}

	cout << mx + mn;
	return 0;
}