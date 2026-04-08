#pragma once
#include <string>
#include <ctime>


using namespace std;

struct Date {
	int days, month, years;

	Date() {
		days = 1;
		month = 1;
		years = 1800;
	}
	Date(int days, int month, int years) : days(days), month(month), years(years) {}

	void setData(int days, int month, int years) {
		this->days = days;
		this->month = month;
		this->years = years;

	}
	friend ostream& operator<<(ostream& out, const Date& date) {
		return out << date.days << "." << date.month << "." << date.years;
	}

	static Date getCurrentDate() {
		time_t t = time(nullptr);
		struct tm now;

		// localtime_s требует указатель на tm и указатель на time_t
		localtime_s(&now, &t);

		return Date(now.tm_mday, now.tm_mon + 1, now.tm_year + 1900);
	}


	static int findAge(Date bd) {
		Date now = getCurrentDate();

		if (bd.month < now.month ||
			(bd.month == now.month && bd.days < now.days)) {
			return now.years - bd.years;
		}
		
		return now.years - bd.years - 1;

	}


};