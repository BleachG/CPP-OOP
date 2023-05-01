#pragma once
class Student
{
public:
	Student(const char*);
	~Student();
	void displayGrades() const;
	void addGrade(int);
	static int getNumStudents();

private:
	int* grades;
	char* name;
	int numGrades;
	int idNum;
	static int numStudents;
};

