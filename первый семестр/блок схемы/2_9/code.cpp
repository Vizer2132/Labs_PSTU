#include <iostream>
#include <cmath>

using namespace std;

int main() {
	setlocale(LC_ALL, "Rus");
	int n = 0, b, space;
	int lsc = 1; /*
			* * * * *
		  *       * *
		* * * * *   * <- переменная за меня считает  
		*       *   *	   сколько в этой линии уже стоит звездочек
		*       *   *
		*       * *
		* * * * *
	*/
	cout << "введите число больше 3-х: ";
	do {
		cin >> n;
	} while (n < 3);
	
	b = n * sqrt(1/2.0);
	space = b-1;

	for (size_t i = 0; i < space; i++) {
		cout << "  ";
	}
	space--;
	for (size_t i = 0; i < n; i++) {		
		cout << "* ";
	}

	for (size_t i = 0; i < b-2; i++) {		
		cout << endl;
		for (size_t j = 0; j < space; j++) {
			cout << "  ";
		}
		space--; 
		cout << "* ";

		for (size_t j = 0; j < n-2; j++) {
			cout << "  ";
		}
		cout << "* ";


		for (size_t j = 0; j < b - 3 - space; j++) {
			cout << "  ";
		}
		cout << "* ";
		lsc++;
	}
	cout << endl;


	space = b - 1;

	for (size_t i = 0; i < n; i++) {
		cout << "* ";
	}
	for (size_t j = 0; j < b-2; j++) {
		cout << "  ";
	}
	cout << "* ";
	lsc++;


	for (size_t i = 0; i < n - 2; i++) {
		cout << endl << "* ";
		for (size_t j = 0; j < n - 2; j++) {
			cout << "  ";
		}
		cout << "* ";
		if ((i-b) < 0) {
			for (size_t j = 0; j < b - 2; j++) {
				cout << "  ";
			}
			cout << "* ";
		}
		else {
			if (lsc < n) {
				for (size_t j = 0; j < b - 2; j++) {
					cout << "  ";
				}
				cout << "* ";
				lsc++;
				space = b - 3;
			}
			else {
				for (size_t j = 0; j < space; j++) {
					cout << "  ";
				}
				space--;
				cout << "* ";
			}
		}

	}
	cout << endl;
	for (size_t i = 0; i < n; i++) {
		cout << "* ";
	}
	return 0;
}