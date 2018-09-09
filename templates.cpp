// CPP_GitHub.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

template<typename T>
void swaper(T &a, T &b)
{
	T temp = a;
	a = b;
	b = temp;
}

void templates()
{
	int a = 1, b = 2;
	int &aNum = a;
	int &bNum = b;
	swaper<int>(a, b);
	cout << "a = " << a << " b = " << b << endl;
}

int main()
{
	templates();
	return 0;
}
