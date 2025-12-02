#include <iostream>

using namespace std;

int main() {
	int n, s;
	bool flag = 0;

	cin >> n >> s;

	while (n > 0) {
		if (s == n % 10) {
			flag = 1;
			break;
		}

		n = (n - (n % 10)) / 10;
	}
	if (flag == 0) {
		cout << "no";
	}
	else {
		cout << "yes";
	}

	return 0;
}