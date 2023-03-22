#pragma once

#include "Date.h"
#include <string>

using namespace std;


class Student {
public:
	enum BachelorsDegree { Computers, Psycologycs, Education, BusinessAdministration };

private:
	int id;
	string firstName;
	string lastName;
	Date dateOfBirth;
	BachelorsDegree degree;
	double gpa;

public:
	Student(string firstName, string lastName, Date dateOfBirth, BachelorsDegree degree, double gpa);
	
	int getID() { return id; };
	string getFirstName() { return firstName; };
	string getLastName() { return lastName; };
	Date getDateOfBirth() { return dateOfBirth; };
	BachelorsDegree getBachelorsDegree() { return degree; };
	double getGPA() { return gpa; };

	void setID(int id) { this->id = id; };
	void setFirstName(string firstName) { this->firstName = firstName; };
	void setLastName(string lastName) { this->lastName = lastName; };
	void setDateOfBirth(Date date) { this->dateOfBirth = date; };
	void setBachelorsDegree(string bachelorsDegree) { this->degree = degree; };
	void setGPA(double gpa) { this->gpa = gpa; };

};