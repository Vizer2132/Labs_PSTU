#include <iostream>

using namespace std;

int main() {
	int N, s{ 0 };
	cin >> N;

	for (size_t i = 1; i <= N; i++) {
		s += i;
	}
	cout << s;

	return 0;
}