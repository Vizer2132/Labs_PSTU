#include <iostream>

using namespace std;

int main() {
	int n, s = 0;

	cin >> n;

	for (size_t i = 1; i < n + 1; i++) {
		s += pow(-1, i) * i;
	}
	cout << s;

	return 0;
}