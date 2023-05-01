#define _CRT_SECURE_NO_WARNINGS
#include "Student.h"
#include <iostream>
using std::cout;
using std::endl;

#include <iomanip>

using std::setw;

#include <cstring>

#include "Student.h"

#include <new>
int Student::numStudents = 0;
// constructor
Student::Student(const char* nPtr)
{
    grades = new int[1];
    grades[0] = 0;
    name = new char[strlen(nPtr) + 1];
    strcpy(name, nPtr);
    numGrades = 0;
    numStudents++;
    cout << "A student has been added\n";
} // end class Student constructor

// destructor
Student::~Student()
{
    cout << name << " has been deleted\n";
    delete grades;
    delete name;
    numStudents--;
} // end class Student destructor

// function displayGrades definition
void Student::displayGrades() const
{
    cout << "Here are the grades for " << name << endl;

    // output each grade
    for (int i = 0; i < numGrades; i++)
        cout << setw(5) << grades[i];

    cout << endl << endl;
} // end function displayGrades

// function addGrade definition
void Student::addGrade(int grade)
{
    int* temp = new int[numGrades + 1];
    for (int i = 0; i < numGrades; i++)
        temp[i] = grades[i];
    temp[numGrades] = grade;
    grades = temp;
    numGrades++;
    for (int i = 0; i < numGrades; i++)
    {
        grades[i] = temp[i];
    }
  

} // end function addGrade

// function getNumStudents definition
int Student::getNumStudents()
{
    return numStudents;
} // end function getNumStudents
