#include <iostream>
using namespace std;

int main() {
	float a;
	cin >> a;

	if (a < 5) {
		a *= 5;
	}	
	else if ((a >= 5) && (a <= 7)) {
		a /= 10;
	}
	else {
		a += 3;
	}

	cout << a;

	return 0;
}