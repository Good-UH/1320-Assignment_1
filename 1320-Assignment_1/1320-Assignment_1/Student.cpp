#include "Student.h"
#include <iostream>
#include <string>
using namespace std;

//Initialize numberOfStudent to 0(zero)
int Student::numberOfStudents = 0;

Student::Student() {
	//Increment (plus 1) the value of the public static variable, Nothing else
	(" ", " ", 0);
	numberOfStudents++;
}
Student::Student(string firstName, string lastName, int ID) {
	//Increment (plus 1) the value of the public static variable, Nothing else
	numberOfStudents++;
	//Assign the constructor arguement values to the member variables of the class Student
	_firstName = firstName;
	_lastName = lastName;
	_ID = ID;
}
//Function that returns first and last name together
string Student::getName() {
	return _firstName + " " + _lastName;
}
//Function that returns the student's ID
int Student::getID() {
	return _ID;
}