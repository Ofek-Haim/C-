// CPP_GitHub.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;


void conditions()
{
	int number;
	cout << "Enter a number:";
	cin >> number;
	if (number == 20)
		cout << "The number that get input is 20" << endl;
	else if (number == 10)
		cout << "The number that get input is 10" << endl;
	else
		cout << "The number that get input is not 10 or 20" << endl;

	int x = 0;
	x ? cout << "x!=0" << endl : cout << "x=0" << endl;

	cout << "Do you like apples (Y or N)?\n";
	char answer;
	cin >> answer;
	switch (answer)
	{
	case 'y':
	case 'Y':
		cout << "Take an Apple!\n";
		break;

	case 'n':
	case 'N':
		cout << "It's your problem...\n";
		break;

	default:
		cout << "I can't understand you...\n";
	}

	int a = 10, b = 20;
	int max = a>b ? a : b;
	cout << max << endl;
}

int main()
{
	conditions();
    return 0;
}
