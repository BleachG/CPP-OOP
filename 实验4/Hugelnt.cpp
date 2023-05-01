#include "HugeInt.h"
#include <iostream>
using std::cout;
using std::endl;

#include <cctype> // isdigit function prototype
using std::isdigit;
#include <cstring> // strlen function prototype
using std::strlen;
#include "Hugeint.h" // HugeInt class definition

// default constructor; conversion constructor that converts
// a long integer into a HugeInt object
HugeInt::HugeInt(long value)
{
    // initialize array to zero
    for (int i = 0; i <= 29; i++)
        integer[i] = 0;

    // place digits of argument into array 
    for (int j = 29; value != 0 && j >= 0; j--)
    {
        integer[j] = value % 10;
        value /= 10;
    } // end for
} // end HugeInt default/conversion constructor

// conversion constructor that converts a character string 
// representing a large integer into a HugeInt object
HugeInt::HugeInt(const char* string)
{
    // initialize array to zero
    for (int i = 0; i <= 29; i++)
        integer[i] = 0;

    // place digits of argument into array
    int length = strlen(string);

    for (int j = 30 - length, k = 0; j <= 29; j++, k++)

        if (isdigit(string[k]))
            integer[j] = string[k] - '0';

} // end HugeInt conversion constructor

// get function calculates length of integer
int HugeInt::getLength() const
{
    int i = 0;
    for (i = 0; i <= 29; i++)
        if (integer[i] != 0)
            break; // break when first digit is reached

    return 30 - i; // length is from first digit (at i) to end of array
} // end function getLength

// addition operator; HugeInt + HugeInt
HugeInt HugeInt::operator+(const HugeInt& op2) const
{
    HugeInt temp; // temporary result
    int carry = 0;

    for (int i = 29; i >= 0; i--)
    {
        temp.integer[i] =
            integer[i] + op2.integer[i] + carry;

        // determine whether to carry a 1
        if (temp.integer[i] > 9)
        {
            temp.integer[i] %= 10;  // reduce to 0-9
            carry = 1;
        } // end if
        else // no carry 
            carry = 0;
    } // end for

    return temp; // return copy of temporary object
} // end function operator+

HugeInt HugeInt::operator-(const HugeInt&op2) const
{
    HugeInt temp; // temporary result
    int carry = integer[29];
    int m = op2.getLength();
    for (int i = 29; i >=0; i--)
    {
        if (integer[i] < op2.integer[i])
        {
            temp.integer[i] =
                carry + 10 - op2.integer[i];
            carry =integer[i-1]- 1;
        }
        else
        {
            temp.integer[i] =
                carry  - op2.integer[i];
            carry = integer[i-1];
        }
         //determine whether to carry a 1
    } // end for

    return temp; // return copy of temporary object
}

// addition operator; HugeInt + int
HugeInt HugeInt::operator+(int op2) const
{
    // convert op2 to a HugeInt, then invoke 
    // operator+ for two HugeInt objects
    return *this + HugeInt(op2);
} // end function operator+

// addition operator;
// HugeInt + string that represents large integer value
HugeInt HugeInt::operator+(const char* op2) const
{
    // convert op2 to a HugeInt, then invoke 
    // operator+ for two HugeInt objects
    return *this + HugeInt(op2);
} // end function operator+

HugeInt HugeInt::operator-(int op2) const
{
    return  *this-HugeInt(op2);
}

bool HugeInt::operator<(const HugeInt&h) const
{
    int i = 0;
    int n = h.getLength();
    n = 30 - n;
    for (i = n; i<=29; i++)
    {
        if (this->integer[i] != h.integer[i])
        {
            return this->integer[i] < h.integer[i];
        }
    }
}

bool HugeInt::operator<=(const HugeInt&h) const
{
    int i = 0;
    int count = 0;
    int n = h.getLength();
    n = 30 - n;
    for (i = n; i<=29 ; i++)
    {
        if (this->integer[i] != h.integer[i])
        {
          return this->integer[i] < h.integer[i];
        }
        else
        {
            count++;
        }
    }
    if (count == n)
    {
        return true;
    }
}

bool HugeInt::operator>(const HugeInt&h) const
{
    int i = 0;
    int n = h.getLength();
    n = 30 - n;
    for (i = n; i<30; i++)
    {
        if (this->integer[i] != h.integer[i])
        {
            return this->integer[i] > h.integer[i];
        }
    }
}

bool HugeInt::operator>=(const HugeInt&h) const
{
    int i = 0;
    int count = 0;
    int n = h.getLength();
    n = 30 - n;
    for (i =n; i<30; i++)
    {
        if (this->integer[i] != h.integer[i])
        {
            return this->integer[i] > h.integer[i];
        }
        else
        {
            count++;
        }
    }
    if (count == n)
    {
        return true;
    }
}

bool HugeInt::operator==(const HugeInt&h) const
{
    int i = 0;
    int count = 0;
    int n = h.getLength();
    n = 30 - n;
    for (i = n; i<30; i++)
    {
        if (this->integer[i] == h.integer[i])
        {
            count++;
        }
    }
    if (count == n)
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool HugeInt::operator!=(const HugeInt&h) const
{
    int i = 0;
    int count = 0;
    int n = h.getLength();
    n = 30 - n;
    for (i = n; i<30; i++)
    {
        if (this->integer[i] == h.integer[i])
        {
            count++;
        }
    }
    if (count == n)
    {
        return false;
    }
    else
    {
        return true;
    }
}
ostream& operator<<(ostream& output, const HugeInt& num)
{
    int i;

    for (i = 0; (num.integer[i] == 0) && (i <= 29); i++)
        ; // skip leading zeros

    if (i == 30)
        output << 0;
    else

        for (; i <= 29; i++)
            output << num.integer[i];

    return output;
} // end function operator<<
