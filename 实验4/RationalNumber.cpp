#include "RationalNumber.h"
#include <cstdlib>
using std::exit;
#include <iostream> 
using std::cout;
using std::endl;
#include "RationalNumber.h"

void RationalNumber::printRational() const
{
    if (numerator == 0) // print fraction as zero
        cout << numerator;
    else if (denominator == 1) // print fraction as integer
        cout << numerator;
    else
        cout << numerator << '/' << denominator;
} // end function printRational
// function reduction definition
void RationalNumber::reduction()
{
    int largest, gcd = 1;  // greatest common divisor;

    largest = (numerator > denominator) ? numerator : denominator;

    for (int loop = 2; loop <= largest; loop++)
        if (numerator % loop == 0 && denominator % loop == 0)
            gcd = loop;

    numerator /= gcd;
    denominator /= gcd;
} // end function reduction

RationalNumber::RationalNumber(int a, int b)
{
    if (b == 0)
    {
        cout << "·ÖÄ¸Îª0´íÎó" << endl;
        exit;
    }
    else
    {
        numerator = a;
        denominator = b;
        this->reduction();
    }
}

RationalNumber RationalNumber::operator+(RationalNumber ep)
{
    int common = this->denominator * ep.denominator;
    int m = ep.denominator * this->numerator + ep.numerator * this->denominator;
    RationalNumber ep1(m,common);
    return ep1;
}

RationalNumber RationalNumber::operator-(RationalNumber ep)
{
    int common = this->denominator * ep.denominator;
    int m = ep.denominator * this->numerator-ep.numerator * this->denominator;
    RationalNumber ep1(m, common);
    return ep1;
}

RationalNumber RationalNumber::operator*(RationalNumber ep)
{
    int common = this->denominator * ep.denominator;
    int m = ep.numerator*this->numerator;
    RationalNumber ep1(m, common);
    return ep1;
}

RationalNumber RationalNumber::operator/(RationalNumber ep)
{
    int common = this->denominator * ep.numerator;
    int m = ep.denominator * this->numerator;
    RationalNumber ep1(m, common);
    return ep1;
}

bool RationalNumber::operator>(RationalNumber ep)
{
    int m1 = this->numerator * ep.denominator;
    int m2 = ep.numerator * this->denominator;
    return m1 > m2;
}

bool RationalNumber::operator<(RationalNumber ep)
{
    int m1 = this->numerator * ep.denominator;
    int m2 = ep.numerator * this->denominator;
    return m1 < m2;
}

bool RationalNumber::operator>=(RationalNumber ep)
{
    int m1 = this->numerator * ep.denominator;
    int m2 = ep.numerator * this->denominator;
    return m1 >=m2;
}

bool RationalNumber::operator<=(RationalNumber ep)
{
    int m1 = this->numerator * ep.denominator;
    int m2 = ep.numerator * this->denominator;
    return m1<=m2;
}

bool RationalNumber::operator==(RationalNumber ep)
{
    int m1 = this->numerator * ep.denominator;
    int m2 = ep.numerator * this->denominator;
    return m1==m2;
}

bool RationalNumber::operator!=(RationalNumber ep)
{
    int m1 = this->numerator * ep.denominator;
    int m2 = ep.numerator * this->denominator;
    return m1!= m2;
}
