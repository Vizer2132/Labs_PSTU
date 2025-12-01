#include <iostream>

using namespace std;

int main() {
	int n;
	cin >> n;

	int space = n / 2;
	int stars = 1;

	for (size_t i = 0; i < n; i++) {
		for (size_t j = 0; j <= i; j++) {
			cout << " ";
		}
		space--;

		for (size_t j = 0; j < n-i; j++) {
			cout << "*";
		}
		stars++;

		cout << endl;
	}
}