#include "Date.h"


Date::Date(int day, int month, int year)
{
	this->day = day;
	this->month = month;
	this->year = year;

}

bool Date::isValid(int day, int month, int year) {

	if ((year > 2999) || (year < 1800))
		return false;
	if (day < 1)
		return false;
	if ((month < 1) || (month > 12))
		return false;
	else {
		if (month == 2) {
			if (day > 29)
				return false;
		}
		else if ((month == 1) || (month == 3) || (month == 5) || (month == 7) || (month == 8) || (month == 10) || (month == 12)) {
			if (day > 31)
				return false;
		}
		else {
			if (day > 30)
				return false;
		}
	}

	return true;

}