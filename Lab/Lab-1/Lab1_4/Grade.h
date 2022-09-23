#pragma once

using namespace std;

class Grade
{
private:
	
	float Homework;
	float Lab;
	float Project;
	float Exam;
	float Total;

public:

	Grade();
	Grade(float homework, float lab, float project, float exam, float total);

	void setHomework(float setHomework);
	void setLab(float setLab);
	void setProject(float setProject);
	void setExam(float setExam);
	
	float getFinalScore();



};