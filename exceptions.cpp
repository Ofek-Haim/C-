// CPP_GitHub.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

void throwingFunction()
{
	throw "This is the exception!";
}

void exceptions()
{
	try {
		throwingFunction();
		cout << "Test print" << endl;
	}
	catch (const char* string) {
		cout << "Caught it:" << string << endl;
	}
}


int main()
{
	exceptions();
	return 0;
}
