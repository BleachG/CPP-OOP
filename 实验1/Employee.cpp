#include "Employee.h"

Employee::Employee(string fn, string ln, int s)
{
	setfirstname(fn);
	setlastname(ln);
	if (s >= 0)
	{
		setsalary(s);
	}
	else {
		this->salary = 0;
	}
}

void Employee::setfirstname(string fname)
{
	this->firstname = fname;
}

string Employee::getfirstname()
{
	return this->firstname;
}

void Employee::setlastname(string lname)
{
	this->lastname = lname;

}

string Employee::getlastname()
{
	return this->lastname;
}

void Employee::setsalary(int s)
{
	this->salary = s;
}

int Employee::getsalary()
{
	return this->salary;
}

void Employee::increase(double x)
{
	this->salary = this->salary * (1 + x);
}
