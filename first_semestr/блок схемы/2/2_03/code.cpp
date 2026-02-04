#include <iostream>

using namespace std;

int main() {
	int N, s{ 0 }, sp{ 1 };
	cin >> N;

	for (size_t i = 0; i < N; i++) {
		sp = 1;
		for (size_t j = i; j < 2*i; j++) {
			sp *= j;
		}
		s += sp;

	}
	cout << s;
}