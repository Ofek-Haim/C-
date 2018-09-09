// CPP_GitHub.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>


using namespace std;


void conversions()
{
	int *p = (int*)malloc(sizeof(int)); // malloc return (void*)
	int a = int(1.23456789);
	cout << "a = " << a << endl;

}	


int main()
{
	conversions();
	return 0;
}
