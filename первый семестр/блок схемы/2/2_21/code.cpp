#include <iostream>


using namespace std;

int main() {
	setlocale(LC_ALL, "rus");

	int n, nb;
	bool flag = 1;

	cin >> nb;
	while (true) {
		cin >> n;
		if (n == 0) { break; }
		if (nb > n) { flag = 0; }
	}

	if (flag == 1) {
		cout << "по возрастанию";
	}
	else {
		cout << "не по возрастанию";
	}


	return 0;
}