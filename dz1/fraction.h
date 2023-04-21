#pragma once
class Fraction
{
	int numerator, denominator;

public:

	Fraction(int newNumerator,int newDenominator);

	void setNumerator(int newNumerator) {
		numerator = newNumerator;
		
	}
	void setDenominator(int newDenominator) {
		denominator = newDenominator;

	}
	int getNumerator() {
		return numerator;
	}
	int getDenominator() {
		return denominator;
	}

	Fraction operator+(Fraction& fraction);
	Fraction operator-(Fraction& fraction);
	Fraction operator/(Fraction& fraction);
	Fraction operator*(Fraction& fraction);




};

