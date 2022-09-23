#include <iostream>
#include "Grade.h"

using namespace std;

int main()
{
	Grade g1;
	double h, l, p, e, t;

	cout << "Enter the grade for each part: " << endl;
	cout << "Homework (0-100): ";
	cin >> h;
	g1.setHomework(h);
	cout << "Lab (0-100): ";
	cin >> l;
	g1.setLab(l);
	cout << "Project (0-100): ";
	cin >> p;
	g1.setProject(p);
	cout << "Exam (0-100): ";
	cin >> e;
	g1.setExam(e);

	t = g1.getFinalScore();
	cout << "Total grade (0-100): " << t << endl;

	system("pause");
	return 0;




}
