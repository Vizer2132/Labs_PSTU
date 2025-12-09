#include <iostream>
#include <cmath>

using namespace std;

int main() {
	int n;
	double a, mx;
	cin >> n;

	mx = sin(n);

	for (int i = 1; i < n; i++) {
		a = sin(n + i/double(n));
		// cout << a << endl;
		if (a > mx) { mx = a; }
	}
	cout << mx;


	return 0;
}