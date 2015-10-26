#include "stdafx.h"
#include <iostream>
using std::cout;

#include "Complex.h"

// Complex constructor
Complex::Complex(double r, double i)
{
	real = r;
	imaginary = i;
}
// Complex destructor
Complex::~Complex() {}

// Overloaded == operator
bool Complex::operator == (const Complex &number) const
{
	if ((real == number.real) && (imaginary == number.imaginary))
		return true;
	else
		return false;
}
