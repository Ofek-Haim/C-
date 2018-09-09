// CPP_GitHub.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

struct Vector2D
{
	double x, y;

	Vector2D& operator += (const Vector2D &b)
	{
		x += b.x;
		y += b.y;
		return *this;
	}
};

inline Vector2D operator + (const Vector2D &a, const Vector2D &b)
{
	Vector2D res;
	res.x = a.x + b.x;
	res.y = a.y + b.y;
	return res;
}


void operators()
{
	Vector2D foo = { 10, 20 };
	Vector2D bar = { 5, 0 };
	Vector2D klop = foo + bar;
	// Vector2D klop = foo + bar; // Error - No define operator for '-'

}	

int main()
{
	operators();
	return 0;
}

