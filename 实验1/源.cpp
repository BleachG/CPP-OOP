#include <iostream>
#include <string>
#include "Account.h"
#include "GradeBook.h"
#include "Employee.h"
#include "Person.h"
using namespace std;




int main()
{
	Person person = Person("John", "Smith", 19);

	cout << "Created " << person.getFirstName() << " " << person.getLastName() << ", age "
		<< person.getAge() << endl;

	person.setAge(person.getAge() + 1);
	cout << "Happy Birthday to " << person.getFirstName() << " "
		<< person.getLastName() << endl;
	cout << person.getAge() << endl;
	return 0;
}