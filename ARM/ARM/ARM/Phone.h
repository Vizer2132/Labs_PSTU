#pragma once
#include <string>

using namespace std;

struct Phone {
	string phoneNumber;
	string name;

	Phone() { }
	Phone(string n, string pn) {
		name = n;
		phoneNumber = pn;
	}

	friend ostream& operator<<(ostream& out, const Phone& phone) {
		return out << phone.name + ": " + phone.phoneNumber;
	}
};