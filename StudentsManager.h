#pragma once
#include "Student.h"
#include "userInterface.h"

#include<vector> 

using namespace std;


class StudentsManager {

private:
	vector<Student> students;
	int currentID = 1;

public:
	vector<Student> getStudentsList() { return students; };
	//int getCurrentID() { return currentID; };
	int generateID() { return currentID++; };

	int takeAction(int action);
	void runApplication();
	int updateStudent(int id);
	int addStudent(string firstName, string lastName, string date, int degree);
	int deleteStudent(int id);

};
