#pragma once
#include <string>
using std::string;

class Person
{
public:
	Person(string, string, int=0);
	string getFirstName();
	void setFirstName(string);
	string getLastName();
	void setLastName(string);
	int&getAge();
	void setAge(int);
private:
	string firstName;
	string lastName;
	int age;
}; // end class Person
