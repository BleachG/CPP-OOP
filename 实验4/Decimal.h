#pragma once
#include <iostream>
using namespace std;


class Decimal
{
	friend ostream& operator<<(ostream&, const Decimal&);
	friend istream& operator>>(istream&,  Decimal&);
public:
	Decimal(double = 0.0);
	void setInteger(double);
	void setDecimal(double);
	Decimal& operator=(const Decimal);
	Decimal operator+ (Decimal);
	Decimal operator+= (Decimal);
	Decimal& operator++();
	Decimal operator++(int);
	bool operator!=(const Decimal);
	bool operator==(const Decimal);
private:
	double integer;
	double decimal;
};

