#include <iostream>
#include "Date.h"
#include "Complex.h"
#include "Card.h"
using namespace std;
int main()
{
	Card c1;
	Card c2(3, 4);
	Card c3(1, 14);

	Card* p1 = &c2;

	c1.print();
	c2.print();
	c3.print();
	p1->print();
	cout << endl;

	c1.setSuit(p1->getSuit());
	c3.setValue(12);
	p1->setValue(5);

	c1.print();
	c2.print();
	c3.print();
	(*p1).print();
	cout << endl;

	return 0;
}