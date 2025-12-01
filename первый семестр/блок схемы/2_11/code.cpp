#include <iostream>

using namespace std;

int main() {
	int n, answer = 0, elem;

	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> elem;
		if (answer == 0) {
			if (elem > 0) answer = 1;
			if (elem < 0) answer = -1;
		}
	}
	switch (answer) {
	case 0: 
		cout << "all elements zero";
		break;
	case 1:
		cout << "first nozero element > 0"; 
		break;
	case -1:
		cout << "first nozero element < 0";
		break;
	}
}