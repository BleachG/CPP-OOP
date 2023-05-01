#pragma once
class Card
{
public:
	Card();
	 Card(int, int);
	 ~Card();

	void setSuit(int);
	int& getSuit();

	void setValue(int);
	int getValue();

	void print();
private:
	int suit;
	int value;
	bool validCard();
};

