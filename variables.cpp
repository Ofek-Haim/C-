// CPP_GitHub.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;


void variables()
{
	char tav = 'T';
	cout << "tav = " << tav << endl;

	short short_number = 32000;
	cout << "short_number = " << short_number << endl;

	int number = 60000;
	cout << "number = " << number << endl;

	long long_number = 2147000000;
	cout << "long_number = " << long_number << endl;

	float float_number = 3.14;
	cout << "float_number = " << float_number << endl;

	double double_number = 3.1415926;
	cout << "double_number = " << double_number << endl;

	long double long_double = 3.1415926535897932384626433;
	cout << "long_double = " << long_double << endl;

	bool true_or_false = true;
	cout << "true_or_false = " << true_or_false << endl;

	wchar_t wchar_t_tav = 'A';
	cout << "wchar_t_tav = " << wchar_t_tav << endl;

	cout << "sizeof(int) = " << sizeof(int) << endl;

	double alphaCentauri = 4.129e+16, radiusOfHelium = 3.1e-11;
	cout << "alphaCentauri = " << alphaCentauri << endl;
	cout << "radiusOfHelium = " << radiusOfHelium << endl;

	int age;
	cout << "Enter your age:";
	cin >> age;
	cout << "Your age is: " << age << endl;

	double lengthOfChain = alphaCentauri / radiusOfHelium;

	cout << 5 / 2.2 << endl;
	
}

int main()
{
	variables();
    return 0;
}

