#include <iostream>
#include "String.h" 
#include "HugeInt.h"
//HugeInt n1(7654321);
    //HugeInt n2(7891234);
    //HugeInt n3("99999999999999999999999999999");
    //HugeInt n4("1");
    //HugeInt result;
    //cout << "n1 is " << n1 << "\nn2 is " << n2
    //    << "\nn3 is " << n3 << "\nn4 is " << n4
    //    << "\nresult is " << result << "\n\n";
    //// test relational and equality operators
    //if (n1 == n2)
    //    cout << "n1 equals n2" << endl;

    //if (n1 != n2)
    //    cout << "n1 is not equal to n2" << endl;

    //if (n1 < n2)
    //    cout << "n1 is less than n2" << endl;

    //if (n1 <= n2)
    //    cout << "n1 is less than or equal to n2" << endl;

    //if (n1>n2)
    //    cout << "n1 is greater than n2" << endl;

    //if (n1 >= n2)
    //    cout << "n1 is greater than or equal to n2" << endl;

    //result = n1 + n2;
    //cout << n1 << " + " << n2 << " = " << result << "\n\n";

    //cout << n3 << " + " << n4 << "\n= " << (n3 + n4) << "\n\n";

    //result = n1 + 9;
    //cout << n1 << " + " << 9 << " = " << result << endl;

    //result = n2 + "10000";
    //cout << n2 << " + " << "10000" << " = " << result << endl;
    //HugeInt m(12341234);
    //result = m-7888;
    //cout << m << " - " << "7888" << " = " << result << endl;
//#include "RationalNumber.h"
//RationalNumber c(7, 3), d(3, 9), x;
//c.printRational();
//cout << " + ";
//d.printRational();
//cout << " = ";
//x = c + d; // test overloaded operators + and =
//x.printRational();

//cout << '\n';
//c.printRational();
//cout << " - ";
//d.printRational();
//cout << " = ";
//x = c - d; // test overloaded operators - and =
//x.printRational();

//cout << '\n';
//c.printRational();
//cout << " * ";
//d.printRational();
//cout << " = ";
//x = c * d; // test overloaded operators * and =
//x.printRational();

//cout << '\n';
//c.printRational();
//cout << " / ";
//d.printRational();
//cout << " = ";
//x = c / d; // test overloaded operators / and =
//x.printRational();

//cout << '\n';
//c.printRational();
//cout << " is:\n";

//// test overloaded greater than operator
//cout << ((c > d) ? "  > " : "  <= ");
//d.printRational();
//cout << " according to the overloaded > operator\n";

//// test overloaded less than operator
//cout << ((c < d) ? "  < " : "  >= ");
//d.printRational();
//cout << " according to the overloaded < operator\n";

//// test overloaded greater than or equal to operator
//cout << ((c >= d) ? "  >= " : "  < ");
//d.printRational();
//cout << " according to the overloaded >= operator\n";

//// test overloaded less than or equal to operator
//cout << ((c <= d) ? "  <= " : "  > ");
//d.printRational();
//cout << " according to the overloaded <= operator\n";

//// test overloaded equality operator
//cout << ((c == d) ? "  == " : "  != ");
//d.printRational();
//cout << " according to the overloaded == operator\n";

//// test overloaded inequality operator
//cout << ((c != d) ? "  != " : "  == ");
//d.printRational();
//cout << " according to the overloaded != operator" << endl;
#include "Decimal.h"
/*Decimal test1;
    Decimal test2;
    Decimal test3(1.234);

    cout << "Initial values:\n"
        << test1 << endl << test2 << endl << test3
        << endl << endl;

    cin >> test1 >> test2;

    cout << "The sum of test1 and test2 is: "
        << test1 + test2 << endl;
    test3 += test1++ + ++test2;

    cout << "\nfinal values:\n"
        << "test1 = " << test1 << endl
        << "test2 = " << test2 << endl
        << "test3 = " << test3 << endl;

    if (test1 != test3)
        cout << "test1 and test3 are not equal to each other\n";*/
using namespace std;
int main()
{
    String string1, string2("The date is");
    String string3(" August 1, 1993");
    // test overloaded operators
    string1 =string2 + string3;
    /* Write a statement to concatenate string2 and string3,
       and assign the result to string1 */
   cout << "\"" << string1 << "\" = \"" << string2 << "\" + \""
       << string3 << "\"" << endl;
    return 0;
} // end main