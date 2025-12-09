#include <iostream>

using namespace std;

int main() {
	int n, s = 0, sign = 1;

	cin >> n;

	for (int i = 1; i <= n; i++) {
		sign = 1;
		if (i%3 == 0) {
			sign = -1;
		}
		// cout << sign * i << " ";
		s += sign * i;



	}
	cout << s;
	return 0;
}