#include <iostream>

using namespace std;

int main() {
	int n;

	cin >> n;

	int space = n / 2;
	int stars = 1;

	for (size_t i = 0; i < (n+1)/2; i++) {
		for (size_t j = 0; j < space; j++) {
			cout << " ";
		}
		space--;

		for (size_t j = 0; j < stars; j++) {
			cout << "*";
		}
		stars+=2;

		cout << endl;
	}


}