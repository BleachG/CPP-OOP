#include "Complex.h"
Complex::Complex(double real, double imaginary)
{
    setComplexNumber(real, imaginary);
} // end Complex constructor

Complex::Complex()
{
    this->imaginaryPart = 0;
    this->realPart = 0;
}

Complex Complex::add(const Complex& right)
{
    double a = this->realPart + right.realPart;
    double b = this->imaginaryPart + right.imaginaryPart;
     Complex c(a, b);
     return c;
} // end function add

double Complex::getrealPart()
{
    return this->realPart;
}

double Complex::getimaginaryPart()
{
    return this->imaginaryPart;
}

Complex Complex::subtract(const Complex& right)
{
    double a = this->realPart -right.realPart;
    double b = this->imaginaryPart - right.imaginaryPart;
    Complex c(a, b);
    return c;
} // end function subtract

void Complex::printComplex()
{
    cout << '(' << realPart << ", " << imaginaryPart << ')';
} // end function printComplex

void Complex::setComplexNumber(double rp, double ip)
{
    realPart = rp;
    imaginaryPart = ip;
} // end function setComplexNumber 
