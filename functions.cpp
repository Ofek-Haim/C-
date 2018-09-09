// CPP_GitHub.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <stdarg.h>

using namespace std;

int add5(int number) {
	return number + 5;
}

int myfunc(int count, ...)
{
	va_list list;
	int j = 0;

	va_start(list, count);
	for (j = 0; j<count; j++)
	{
		printf("%d\n", va_arg(list, int));
	}
	va_end(list);
	return count;
}

void my_name();

void functions()
{
	my_name();
	myfunc(4, -9, 12, 43, 217);
	int number = 50;
	cout << add5(number) << endl;

}

int main(int argc, char *argv[])
{
	cout << argc << endl;
	cout << argv[0] << endl;
	functions();
    return 0;
}

void my_name() {
	cout << "Ofek Haim" << endl;
}
