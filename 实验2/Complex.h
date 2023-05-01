#pragma once
#include <iostream>
using namespace std;
class Complex
{
private:
	double realPart;
	double imaginaryPart;
public:
	Complex(double, double);
	Complex();
	void setComplexNumber(double, double);
	void printComplex();
	Complex subtract(const Complex& right);
	Complex add(const Complex& right);
	double getrealPart();
	double getimaginaryPart();
};

