#include <iostream>
#include <cmath>

using namespace std;

int main() {
	int n;
	double s;
	bool flag = 0;
	cin >> n >> s;

	for (int i = 0; i < n; i++) {
		// cout << sin(n + i / double(n)) << " ";
		if (abs(sin(n + i / double(n)) - s) < 0.000001) {
			flag = 1;
			break;
		}
	}

	if (flag == 1) {
		cout << "yes";
	}
	else {
		cout << "no";
	}

	return 0;
}