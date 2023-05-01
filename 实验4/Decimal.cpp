#include "Decimal.h"
using std::cout;
using std::cin;

#include <cmath>

#include "Decimal.h"
//integer为整数部分
// decimal为小数部分

// constructor
Decimal::Decimal(double n)
{
    decimal = modf(n, &integer);
} // end class Decimal constructor

// function operator<< definition
ostream& operator<<(ostream&output,const Decimal& d)
{
    double n = 0;
    n = floor(d.decimal * 100);//floor向下取整
    if (n < 0)
        n = 0 -n;

    if (d.decimal != 0) {
        output << floor(d.integer) << ".";
        if (n>10||n<-10)
            output << n;
        else
            output << "0" << n;
    } // end if 
    else
        output << d.integer;
    return output;

} // end function operator<<

// function operator>> definition
istream& operator>>(istream&input,Decimal&d)
{
    double n;
    cout << "Enter a number: ";
    input >> n;
    double l = modf(n,&d.integer);
    d.setDecimal(l);
    return input;

} // end function operator>>

// function operator= definition
Decimal& Decimal::operator=(const Decimal d)
{
    integer = d.integer;
    decimal = d.decimal;
    return *this;
} // end function operator=

// function setDecimal definition
void Decimal::setDecimal(double d)
{
    decimal = d;
} // end function setDecimal

// function setInteger definition
void Decimal::setInteger(double i)
{
    integer = i;
} // end function setInteger

// function operator+ definition
Decimal Decimal::operator+(Decimal d)
{
    Decimal result;

    result.setDecimal(decimal + d.decimal);
    result.setInteger(integer + d.integer);

    if (result.decimal >= 1)
    {
        result.decimal--;
        result.integer++;

    } // end if
    else if (result.decimal <= -1)
    {
        result.decimal++;
        result.integer--;
    } // end if

    return result;
} // end function operator+

// function operator+= definition
Decimal Decimal::operator+=(Decimal d) 
{
    setDecimal(decimal +=d.decimal);
    setInteger(integer +=d.integer);
    if (decimal >= 1)
    {
        decimal--;
        integer++;

    } // end if
    else if (decimal <= -1)
    {
        decimal++;
        integer--;
    } // end if

    return *this;
} // end function operator+=

// function operator++ definition
Decimal& Decimal::operator++()
{
    ++integer;
    return *this;
} // end function operator++

// function operator++ definition
Decimal Decimal::operator++(int)
{
    Decimal temp = *this;
    this->integer++;
    return temp;
} // end function operator++

bool Decimal::operator!=(const Decimal d)
{
    return (integer != d.integer && decimal != d.decimal);
}

// function operator== definition
bool Decimal::operator==(const Decimal d)
{
    return (integer == d.integer && decimal == d.decimal);
} // end function operator==

