#include <iostream>
#include <cmath>

using namespace std;

float Func(float x) {
	return acos(x) - sqrt(1 - 0.3*x*x*x);
}

int main() {
	float a, b, c;
	float Fa, Fc;
	double eps = 0.000001;

	a = 0; b = 1;

	while (abs(a - b) > eps) {
		c = (a + b) / 2;

		Fa = Func(a);
		Fc = Func(c);

		if (Fa * Fc < 0) {
			b = c;
		}
		else {
			a = c;
		}
	}
	cout << a << " " << b; // 0.562925 0.562926


}

