#include "StudentsManager.h"


void StudentsManager::runApplication() {
	
	ui_wellcom();
	
	int action;
	int status;

	while (true) {
		action = ui_chooseAction();
		status = takeAction(action);
	}

}


int StudentsManager::takeAction(int action){

	string firstName;
	string lastName;
	string date;
	int degree;
	int studentID;
	int status;

	switch (action) {
	case 1:
		firstName = ui_insertFirstName();
		lastName = ui_insertLastName();
		date = ui_insertDateOfBirth();
		degree = ui_insertDegree();
		status = addStudent(firstName, lastName, date, degree);//
		ui_successfullyAdded();
		return 1;
	case 2:
		studentID = ui_insertStudentID();
		status = deleteStudent(studentID);//
		ui_successfullyDeleted();
		return 1;
	case 3:
		studentID = ui_insertStudentID();
		//
		return 1;
	case 0:
		return -1;
	default:
		ui_notValidAction();
		return 1;
	}

}

int StudentsManager::addStudent(string firstName, string lastName, string date, int degree) {
	int day = stoi(date.substr(0, 2));
	int month = stoi(date.substr(2, 2));
	int year = stoi(date.substr(4, 4));

	Student::BachelorsDegree bachelorsDeg = static_cast<Student::BachelorsDegree>(degree);
	Date dateOfBirth(day, month, year);
	
	Student newStudent(firstName, lastName, dateOfBirth, bachelorsDeg, 0);
	//check if added done and return msg

	students.push_back(newStudent);

	return 1; 

}

int StudentsManager::deleteStudent(int id) { 

	vector<Student>::iterator iter;

	for (auto it = students.begin(); it != students.end(); ++it) {
		if (it->getID() == id) {
			students.erase(it);
		}
	}

	return 1; 
}//


int StudentsManager::updateStudent(int id) {//need to get values to add and update this fnuction -- didn't finished

	vector<Student>::iterator iter;

	for (auto it = students.begin(); it != students.end(); ++it) {
		if (it->getID() == id) {
			//it->set to the value the user asked to add -- didn't finished
		}
	}

	return 1;
}
