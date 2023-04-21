#include "fraction.h"
#include<iostream>

Fraction::Fraction(int newNumerator, int newDenominator) {
	denominator = newDenominator;
	numerator = newNumerator;
}


Fraction Fraction::operator+(Fraction& fraction) {
	return Fraction((numerator * fraction.denominator) + (fraction.numerator * denominator), 
		denominator * fraction.denominator);
}

Fraction Fraction::operator-(Fraction& fraction) {
	return Fraction((numerator * fraction.denominator) - (fraction.numerator * denominator),
		denominator * fraction.denominator);
}

Fraction Fraction::operator*(Fraction& fraction) {
	return Fraction(numerator * fraction.numerator, denominator * fraction.denominator);
}

Fraction Fraction::operator/(Fraction& fraction) {
	return Fraction(numerator * fraction.denominator, denominator * fraction.numerator);
}

