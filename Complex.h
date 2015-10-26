#ifndef COMPLEX_H
#define COMPLEX_H

class Complex
{
public:
	// Complex Constructor
	Complex(double r, double i);
	// Complex Destructor
	Complex::~Complex();

	// Overloaded == operator
	bool operator == (const Complex &number) const;

private:
	double real, imaginary;
};

#endif