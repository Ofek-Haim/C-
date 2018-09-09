// CPP_GitHub.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

class Shape
{
private:
	string name;
public:
	Shape(const string n) { name = n; }
	void setName(const string n) { name = n; }
	string getName() const { return name; }
};

class Circle : public Shape 
{
private:
	double radius;
public:
	Circle(string n, double r) : Shape(n)
	{
		radius = r;
	}
	void setRadius(double r) { radius = r; }
	double getRadius() const { return radius; }

};


void polymorphism()
{
	Circle circle("Circle1", 12);
	cout << "Radius of " << circle.getName() << " = " << circle.getRadius() << endl;
	circle.setName("Circle2");
	circle.setRadius(10.3);
	cout << "Radius of " << circle.getName() << " = " << circle.getRadius() << endl;

}	

int main()
{
	polymorphism();
	return 0;
}
