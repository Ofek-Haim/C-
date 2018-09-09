// CPP_GitHub.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>


using namespace std;

class Shape
{
private:
	string name;
public:
	Shape(const string n) { name = n; }
	void setName(const string n) { name = n; }
	string getName() const { return name; }
	virtual void draw()
	{
		cout << "Cannot draw just any shape" << endl;
	}
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
	void draw()
	{
		cout << " __" << endl;
		cout << "/  \\" << endl;
		cout << "\\  /" << endl;
		cout << " --" << endl;
	}

};

class Shape2 { // Abstract class
public:
	virtual void draw() = 0; // draw is a pure virtual function
};


void virtual_function_and_abstract_classes()
{
	Circle circle("Circle3", 12);
	circle.draw();
	Shape s();
	Shape2 s2(); // Error - abstract class
}	

int main()
{
	virtual_function_and_abstract_classes();
	return 0;
}
