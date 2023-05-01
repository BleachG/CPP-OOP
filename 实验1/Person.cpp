#include "Person.h"
 Person::Person(string first, string last, int years)
{
    setFirstName(first);
    setLastName(last);
    setAge(years);
} // end Person constructor

string Person::getFirstName()
{
    return firstName;
} // end function getFirstName

void Person::setFirstName(string first)
{
    this->firstName= first;
} // end function setFirstName

string Person::getLastName()
{
    return this->lastName;
} // end function getLastName

void Person::setLastName(string last)
{
    lastName = last;
} // end function setLastName

int&Person::getAge()
{
    return age;
} // end function getAge

void Person::setAge(int years)
{
    if (years > 0)
        age = years;
} // end function setAge
