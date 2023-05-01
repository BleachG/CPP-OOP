#pragma once
class RationalNumber
{
public:
	RationalNumber(int = 0, int = 1); // default constructor
	RationalNumber operator+(RationalNumber ep);
	RationalNumber operator-(RationalNumber ep);
	RationalNumber operator*(RationalNumber ep);
	RationalNumber operator/(RationalNumber ep);
	bool operator>(RationalNumber ep);
	bool operator<(RationalNumber ep);
	bool operator>=(RationalNumber ep);
	bool operator<=(RationalNumber ep);
	bool operator==(RationalNumber ep);
	bool operator!=(RationalNumber ep);
	void printRational() const; // display rational number
private:
	int numerator; // private variable numerator ·Ö×Ó
	int denominator; // private variable denominator
	void reduction(); // function for fraction reduction
};

