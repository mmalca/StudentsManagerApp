#pragma once

class Date {

private:
	int day;
	int month;
	int year;

public:
	Date(int day, int month, int year);
	bool isValid(int day, int month, int year);//didn't use this function

};
