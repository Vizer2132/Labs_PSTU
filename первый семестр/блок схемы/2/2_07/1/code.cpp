#include <iostream>
#include <cmath>

using namespace std;

int main() {
	int n, k;

	if (floor(sqrt(n)) == sqrt(n)){ // проверка на целый корень, ее нет на блок схеме
		cin >> n;

		k = sqrt(n);

		for (int i = 0; i < k; i++) {
			for (int j = 0; j < k; j++) {
				cout << "* ";
			}
			cout << endl;
		}
	}
	return 0;
}