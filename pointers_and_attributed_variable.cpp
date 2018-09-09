// CPP_GitHub.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int global_number = 12000;

int &getnum()
{
	int &ref = global_number;
	return ref;
}

void swap(int &a, int &b)
{
	int temp;
	temp = a;
	a = b;
	b = temp;
}

void pointers_and_attributed_variable()
{
	char tav = 'A';
	char *p = &tav;

	cout << "tav = " << tav << endl;
	cout << "tav = " << *p << endl;
	*p = 'B';
	cout << "tav = " << tav << endl;
	printf("%p\n", p);
	cout << "========================" << endl;
	int num = 10;
	int &ref = num;
	cout << "num = " << num << endl;
	cout << "ref = " << ref << endl;
	num = 20;
	cout << "num = " << num << endl;
	cout << "ref = " << ref << endl;
	ref = 30;
	cout << "num = " << num << endl;
	cout << "ref = " << ref << endl;
	
	int number = 100;
	ref = number;

	cout << "num = " << num << endl;
	cout << "ref = " << ref << endl;

	cout << getnum() << endl;
	getnum() = 50;
	cout << getnum() << endl;
	cout << global_number << endl;

}

int main()
{
	pointers_and_attributed_variable();
	return 0;
}
