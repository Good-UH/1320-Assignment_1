#ifndef __STUDENT_H__
#define __STUDENT_H__

#include <string>
using namespace std;

class Student {
private:
	//Private Member Variables, Not Initialized
	string _lastName = "";
	string _firstName = "";
	int _ID = 0;

public:
	//Public static to count number of Student objects created
	static int numberOfStudents;
	//Default Constructor
	Student();
	//Constructor that takes 3 arguments
	Student(string firstName, string lastName, int ID);
	//Public member functions 
	//Returns the student first and last name together in a single string
	string getName();
	//Returns the student's ID
	int getID();
};
#endif
