#include <iostream>
#include <cmath>

using namespace std;

float Func(float x) { return 3*x - 4*log(x) - 5; } // функция
float FuncShtr(float x) { return 3 - 4/x; } // производная функции
float Func2Shtr(float x) { return 4/(x*x); } // вторая производная функции


int main() {
	float a, b, x, xp;
	double eps = 0.000001;

	a = 2; b = 4;


	if (Func(a) * Func2Shtr(a) > 0) x = a;
	else x = b;

	xp =  b - 1;


	while (abs(x - xp) > eps) {
		xp = x;
		x = xp - Func(xp) / FuncShtr(xp);
	}
	cout << x; // 3.22996
}

