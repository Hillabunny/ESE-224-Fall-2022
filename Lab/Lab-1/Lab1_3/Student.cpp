#include "Student.h"
#include <iostream>

using namespace std;

Student::Student()
{
	Name;
	ID;
	Major;
	Email;

}

//constructor with values we can pass in
Student::Student(string n, string i, string m, string e)
{

	Name = n;
	ID = i;
	Major = m;
	Email = e;
}

string Student::getName() 
{
	return Name;
}

string Student::getID()
{
	return ID;
}

string Student::getMajor()
{
	return Major;
}

string Student::getEmail()
{
	return Email;
}

void Student::changeName(string newName)
{
	Name = newName;
}
void Student::changeID(string newID)
{
	ID = newID;
}
void Student::changeMajor(string newMajor)
{
	Major = newMajor;
}
void Student::changeEmail(string newEmail)
{
	Email = newEmail;
}

void Student::printInfo()
{
	cout << "Name: " << Name << endl;
	cout << "ID: "  << ID << endl;
	cout << "Major: " << Major << endl;
	cout << "Email: " << Email << endl;

	}