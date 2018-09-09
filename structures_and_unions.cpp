// CPP_GitHub.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

union u
{
	int number;
	char tav;
};

struct Car {
	double max_speed;
	double speed;
};

void structures_and_unions()
{
	struct Car audi;
	audi.max_speed = 120;
	audi.speed = 45.6;
	cout << "audi max speed: " << audi.max_speed << " audi speed: " << audi.speed << endl;
	audi.speed = 50;
	cout << "audi max speed: " << audi.max_speed << " audi speed: " << audi.speed << endl;

	union u u_var;
	u_var.number = 10;
	u_var.tav = 'G';
	cout << "u number = " << u_var.number << " u tav = " << u_var.tav << endl;
	u_var.number = 12;
	cout << "u number = " << u_var.number << " u tav = " << u_var.tav << endl;
}


int main()
{
	structures_and_unions();
	return 0;
}

