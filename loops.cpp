// CPP_GitHub.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

void loops()
{
	cout << "All the numbers that get input will be added to sum" << endl;
	cout << "Enter '0' to stop" << endl;
	int number, sum = 0;
	cin >> number;
	while (number)
	{
		sum += number;
		cin >> number;
	}
	cout << "sum = " << sum << endl;

	int num = 0;
	do {
		num++;
		cout << "num = " << num << endl;
	} while (num != 3);

	for (int i = 0; i < 10; i++)
	{
		cout << "i of for = " << i << endl;
	}
	cout << "=====================================" << endl;
	for (int j = 0; j < 10; j++)
	{
		if (j == 4) continue;
		cout << "j of for = " << j << endl;
	}
	cout << "=====================================" << endl;
	for (int r = 0; r < 10; r++)
	{
		if (r == 4) break;
		cout << "r of for = " << r << endl;
	}

}

int main()
{
	loops();
    return 0;
}
