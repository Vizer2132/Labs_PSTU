#include <iostream>

using namespace std;

int main() {
	int n, s = 0;

	cin >> n;

	while (n > 0) {
		s += n % 10;
		n = (n - (n % 10)) / 10;
	}
	cout << s;

	return 0;
}