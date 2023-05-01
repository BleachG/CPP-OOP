#pragma once
#include <iostream>
using std::ostream;
class HugeInt
{
	friend ostream& operator<<(ostream&, const HugeInt&);
public:
	HugeInt(long = 0); // conversion/default constructor
	HugeInt(const char*); // conversion constructor

	// addition operator; HugeInt + HugeInt
	HugeInt operator+(const HugeInt&) const;
	HugeInt operator-(const HugeInt&) const;
	// addition operator; HugeInt + int
	HugeInt operator+(int) const;

	// addition operator; 
	// HugeInt + string that represents large integer value
	HugeInt operator+(const char*) const;
	HugeInt operator-(int) const;
	 bool operator<(const HugeInt&) const;
	bool operator<=(const HugeInt&) const;
	bool operator>(const HugeInt&) const;
	bool operator>=(const HugeInt&) const;
	bool operator==(const HugeInt&) const;
	bool operator!=(const HugeInt&) const;
	/* Write prototypes for the six relational and equality operators */

	int getLength() const;
private:
	short integer[30];
};

