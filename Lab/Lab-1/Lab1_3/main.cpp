#include <iostream>
#include "Student.h"

using namespace std;

int main()
{
	cout << "Default Constructor: " << endl; //placeholder constructors

	Student s1;

	cout << "Name: " << s1.getName() << "\n";
	cout << "ID: " << s1.getID() << "\n";
	cout << "Major: " << s1.getMajor() << "\n";
	cout << "Email: " << s1.getEmail() << endl;
	cout << endl;

	cout << "Parameterized Constructor: " << endl;

	string n, i, m, e;
	string name, id, major, email;

	cin >> n;
	cin >> i;
	cin >> m;
	cin >> e;

	cout << endl;

	Student s2(n, i, m, e);

	cout << "Name: " << s2.getName() << endl;
	cout << "ID: " << s2.getID() << endl;
	cout << "Major: " << s2.getMajor() << endl;
	cout << "Email: " << s2.getEmail() << endl;
	cout << endl;
	

	

	cout << "Change student name: " << endl;
	getchar(); //for some reason it wouldn't work without this
	getline(cin, name);
	s2.changeName(name);

	cout << "Change ID number: " << endl;
	
	getline(cin, id);
	s2.changeID(id);

	cout << "Change major: " << endl;
	getline(cin, major);
	s2.changeMajor(major);

	cout << "Change email: " << endl;
	
	getline(cin, email);
	s2.changeEmail(email);

	cout << endl;

	s2.printInfo();

	return 0;

}
