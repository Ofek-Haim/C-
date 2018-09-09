// CPP_GitHub.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

#define MACRO(x) #x
//#define Name

void preprocessor()
{
	cout << MACRO(abcd) << endl;

	#ifdef Name
	cout << "My name is ofek" << endl;
	#else
	cout << "Name do not define" << endl;
	#endif
}

int main()
{
	preprocessor();
	return 0;
}
