#include <iostream>
#include "Grade.h"

using namespace std;

Grade::Grade()
{

	float Homework;
	float Lab;
	float Project;
	float Exam;
	float Total;

}

Grade::Grade(float h, float l, float p, float e, float t)
{
	Homework = h;
	Lab = l;
	Project = p;
	Exam = e;
	Total = t;

}

void Grade::setHomework(float setHomework)
{

	Homework = setHomework;

}

void Grade::setLab(float setLab)
{

	Lab = setLab;

}

void Grade::setProject(float setProject)
{

	Project = setProject;

}

void Grade::setExam(float setExam)
{

	Exam = setExam;

}

float Grade::getFinalScore()
{

	Total = (Homework * 0.2) + (Lab * 0.15) + (Project * 0.35) + (Exam * 0.30);
	return Total;
}