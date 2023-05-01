#define _CRT_SECURE_NO_WARNINGS
#pragma once
#include <iostream> 
using std::cout;
using std::ostream;
#include <cstring> 
#include <cassert>

class String
{
		friend ostream& operator<<(ostream& output, const String& s);
	public:
		String(const char* const = ""); // conversion constructor
		String(const String&); // copy constructor
		~String(); // destructor
		const String& operator=(const String&);
		 const String operator+(const String&);
	private:
		char* sPtr; // pointer to start of string
		int length; // string length
	 // end class String
};

