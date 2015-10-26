// SWDesignAssignFour.cpp : Defines the entry point for the console application.

#include "stdafx.h"
#include <typeinfo>
#include <iostream>
using std::cin;
using std::cout;

#include "Complex.h"

// Function template for isEqualTo()
template<typename TYPE>
bool isEqualTo(const TYPE arg1, const TYPE arg2)
{
	if (arg1 == arg2)
		return true;
	else
		return false;
}

int _tmain(int argc, _TCHAR* argv[])
{
	// Variable declaration for all types
	int a = 10, b = 10;
	double c = 5.18, d = 6.30;
	char e = 'A', f = 'B';
	Complex g(20, 45), h(20, 45);	// user-defined type
	
	cout << "Using 'isEqualTo' Function Template...";
	
	// isEqualTo(int,int);
	cout << "\n\nTwo Int: "  << isEqualTo(a,b);
	cout << "\n" << (isEqualTo(a,b) ? "Int are equal" : "Int are not equal");
	
	// isEqualTo(Double,Double);
	cout << "\n\nTwo Double: " << isEqualTo(c,d);
	cout << "\n" << (isEqualTo(c,d) ? "Double are equal" : "Double are not equal");
	
	// isEqualTo(Char,Char);
	cout << "\n\nTwo Char: "   << isEqualTo(e,f);
	cout << "\n" << (isEqualTo(e,f) ? "Char are equal" : "Char are not equal");
	
	// isEqualTo(Complex,Complex);
	cout << "\n\nTwo Complex: " << isEqualTo(g, h);
	cout << "\n" << (isEqualTo(g, h) ? "Complex are equal" : "Complex are not equal") << "\n\n";
	
	system("pause");
	return 0;
}
