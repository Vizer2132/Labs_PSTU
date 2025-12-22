#include <iostream>
#include <cmath>

using namespace std;

float Func(float x) { return 3*x - 4*log(x) - 5; } // функция
float FuncShtr(float x) { return 3 - 4/x; } // производная функции


int main() {
	float a, b, lambda, x, xprev;
	double eps = 0.000001;
	a = 2;
	b = 4;

	// выбираем люмбду по условию 
	// -1/r < лямбда <  0,   если f'(x) > 0
	//   0  < лямбда < 1/r, если f'(x) < 0
	// где r = max(abs(f'(a)), abs(f'(b)))

	float r = max(abs(FuncShtr(a)), abs(FuncShtr(b)));

	if (FuncShtr(b) - FuncShtr(a) > 0) {
		lambda = -1 / (30 * r);
	}
	else {
		lambda = 1 / (30 * r);
	}


	x = (a+b) / 2; // можно выбрать любое х из [2, 4]
	xprev = x-1; // число меньше х

	while (abs(x - xprev) > eps) {
		xprev = x;
		x = lambda * Func(xprev) + xprev; // вычисляем значение фи
	}
	cout << x; // 0.381381

	return 0;
}