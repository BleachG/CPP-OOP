#include "String.h"
// Lab 1: String.cpp
// Member-function definitions for String.cpp
#include <iostream> 
using std::cout;
using std::ostream;

#include <cstring> // strcpy and strcat prototypes 
#include "String.h" // String class definition

// conversion constructor: convert a char * to String
String::String(const char* const zPtr)
{
    length = strlen(zPtr); // compute length
    sPtr = new char[length + 1]; // allocate storage
    assert(sPtr != 0); // terminate if memory not allocated
    strcpy(sPtr, zPtr); // copy literal to object
} // end String conversion constructor

// copy constructor
String::String(const String&copy)
{
    length = strlen(copy.sPtr); // copy length
    char arr[100] = { '\0' };
    sPtr = new char[length + 1]; // allocate storage
    assert(sPtr != 0); // ensure memory allocated
    strcpy(arr, copy.sPtr); // copy string
} // end String copy constructor

// destructor
String::~String()
{
    delete[] sPtr; // reclaim string
} // end destructor

// overloaded = operator; avoids self assignment
const String& String::operator=(const String&right)
{
    if (&right != this) // avoid self assignment
    {
        delete []sPtr;
        length = right.length;
        sPtr = new char[length+1];
        strcpy(sPtr, right.sPtr);
    }
    else
        cout << "Attempted assignment of a String to itself\n";
    return *this;
} // end function operator=


const String String::operator+(const String&s)
{
    String temp;
    char arr[100] = {'\0'};
    strcpy(arr, this->sPtr);
    temp.length = s.length + this->length;
    temp.sPtr = new char[temp.length + 1];
    strcpy(temp.sPtr, strcat(arr,s.sPtr));
    return temp;
}
// overloaded output operator
ostream& operator<<(ostream& output, const String& s)
{
    output << s.sPtr;
    return output; // enables concatenation
} // end function operator<<