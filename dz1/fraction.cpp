#include "fraction.h"
#include<iostream>
using namespace frc;

Fraction::Fraction(int newNumerator, int newDenominator) {
	denominator = newDenominator;
	numerator = newNumerator;
}

Fraction Fraction::operator+(Fraction& fraction) {
	if (denominator == fraction.denominator) {
		numerator = numerator + fraction.numerator;
		return *this;
	}
	else {
		numerator = (numerator * fraction.denominator) + (fraction.numerator * denominator);
		denominator = denominator * fraction.denominator;
		return *this;
	}	
}

Fraction Fraction::operator-(Fraction& fraction) {
	if (denominator == fraction.denominator) {
		numerator = numerator - fraction.numerator;
		return *this;
	}
	else {
		numerator = (numerator * fraction.denominator) - (fraction.numerator * denominator);
		denominator = denominator * fraction.denominator;
		return *this;
	}
}

Fraction Fraction::operator*(Fraction& fraction) {
	numerator = numerator * fraction.numerator;
	denominator = denominator* fraction.denominator;
	return *this;
}

Fraction Fraction::operator/(Fraction& fraction) {
	numerator = numerator * fraction.denominator;
	denominator = denominator * fraction.numerator;
	return *this;
}
