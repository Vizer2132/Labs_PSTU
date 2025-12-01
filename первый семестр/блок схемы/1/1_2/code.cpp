#include <iostream>
using namespace std;

int main() {
	int a, b;
	cin >> a >> b; 
	
	if (b == 0) {
		cout << "delenie na 0";
		return 0;
	}
	else {
		cout << "a / b = " << a / b;
	}

	return 0;
}