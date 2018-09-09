// CPP_GitHub.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;


void arrays()
{
	const int arr_size = 10;
	int arr[arr_size]; // Like int arr[10];
	arr[5] = 100;
	cout << "arr[5] = " << arr[5] << endl;
	int primes[] = { 2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37 };
	const size_t primesCount = sizeof(primes) / sizeof(primes[0]);
	cout << primesCount << endl;

	int numbers[10] = {};
	for (int i = 0; i < 10; i++) {
		cout << "numbers[" << i << "] = " << numbers[i] << endl;
	}
	int array[5][5];
}


int main()
{
	arrays();
    return 0;
}
