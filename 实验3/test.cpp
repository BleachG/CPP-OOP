#include <iostream>
using namespace std;
#include "SimpleCalculator.h"

#include "IntegerSet.h" // IntegerSet class definition

#include "Student.h"

int main()
{
    cout << "There are currently " << Student::getNumStudents()
        << " students\n\n";

    Student*s1Ptr = new Student("Student 1");
    s1Ptr->addGrade(100);
    s1Ptr->addGrade(75);
    s1Ptr->addGrade(89);
    s1Ptr->displayGrades();

    Student* s2Ptr = new Student("Student 2");
    s2Ptr->addGrade(83);
    s2Ptr->addGrade(92);
    s2Ptr->displayGrades();

     Student s3("Student 3");
     s3.addGrade(62);
     s3.addGrade(91);
     s3.displayGrades();

    cout << "There are currently " << Student::getNumStudents()
        << " students\n\n";

    delete s2Ptr;
    delete s1Ptr;
    return 0;
} // end main