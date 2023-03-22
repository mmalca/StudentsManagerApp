#include "userInterface.h"


void ui_wellcom(){

	cout << "Wellcome to Students Manager Application!" << endl; 

}

int ui_chooseAction(){

	int action;

	cout << "Please choose the action you would like to take:" <<
		"To add new student pess 1\n" <<
		"To delete a student pess 2\n" <<
		"To update student information pess 3\n" << 
		"To exit the application, please press 0\n" << endl;
	cin >> action;
	
	return action;
}

string ui_insertFirstName() {

	string firstName;
	cout << "Please insert student's first name:" << endl;
	cin >> firstName;
	
	return firstName;

}

string ui_insertLastName() {

	string lastName;
	cout << "Please insert student's last name:" << endl;
	cin >> lastName;
	
	return lastName;
}
	
string ui_insertDateOfBirth() {
	string date;
	cout << "Please insert student's date of birth on the format ddmmyyyy:" << endl;
	cin >> date;
	return date;
}

int ui_insertDegree() {

	int degree;

	cout << "Please insert degree\n" <<
		"For Computers press 1\n" <<
		"For  Psycologycs press 2\n" <<
		"For Education press 3\n" <<
		"For BusinessAdministration press 4" << endl;
	
	cin >> degree;
	return degree;

}

int ui_insertStudentID() {

	int studentID;
	cout << "Please insert student's id:" << endl;
	cin >> studentID;
	return studentID;

}

void ui_notValidAction() {

	cout << "Not a valid action!" << endl;

}

void ui_successfullyAdded() {

	cout << "New student added successfully!" << endl;

}

void ui_successfullyDeleted() {

	cout << "Student successfully deleted!" << endl;

}