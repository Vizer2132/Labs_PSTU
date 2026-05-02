#include <iostream>
#include <string>

using namespace std;

/*
	 ласс- контейнер —ѕ»—ќ  с ключевыми значени€ми типа int.
	–еализовать операции:
	[] Ц доступа по индексу;
	() Ц определение размера списка;
	* число Ц умножает все элементы списка на число;
	- n Ц переход влево к элементу с номером n ( с помощью класса-итератора)
*/

class Pair
{
public:
	int first;
	double second;

	Pair(int f, double s) {
		first = f;
		second = s;
	}
	~Pair() {

	}
	
	friend ostream operator<<(ostream& out, const Pair& pair) {
		out << pair.first << ":" << pair.second;
		return out;
	}


};
#include "list.h"

int main() {
	List<int> listI = { 1, 2, 3, 4 };
	List<double> listD = { 1.1, 2.2, 3.3, 4.4 };
	List<string> listS = { "1s", "2s", "3s", "4s" };
	List<Pair> listP = { { 1, 0.1 }, { 2, 0.2 }, { 3, 0.3}, 4, 0.4 };

	for (auto it = list.rbegin(); it != list.rend(); it = it - 2) {
		cout << *it << " ";
	}
}