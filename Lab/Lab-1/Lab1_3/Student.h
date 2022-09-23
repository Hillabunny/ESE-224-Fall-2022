#pragma once
#include <string>

using namespace std; //if there's no using namespace std; we will have to add it in front of the string

class Student
{
private:

	string Name;
	string ID;
	string Major;
	string Email;

public:

	Student();

	Student(string name, string id, string major, string email);

	//accessors
	string getName();
	string getID();
	string getMajor();
	string getEmail();
	
	//mutators
	void changeName(string newName); //void because we're not returning anything
	void changeID(string neweID);
	void changeMajor(string newMajor);
	void changeEmail(string newEmail);

	void printInfo();
};