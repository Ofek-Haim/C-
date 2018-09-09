// CPP_GitHub.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <vector>


using namespace std;


void dynamic_memory()
{
	int *ptr = new int;
	cout << "Enter a number:";
	cin >> *ptr;
	cout << "ptr = " << *ptr << endl;
	delete ptr;

	int length;
	cout << "Enter the size of the array:";
	cin >> length;

	int *array = new int[length];
	for (int i = 0; i < length; i++)
		cin >> array[i];
	for (int i = 0; i < length; i++)
		cout << "array[" << i << "] = " <<array[i] << endl;
	delete[] array;


	vector<int> v(8);       // ווקטור (מערך) של 8 איברים
	size_t i, new_size;

	// קלט 8 איברים ראשונים
	for (i = 0; i < v.size(); i++)
	{
		cout << "Enter a number:";
		cin >> v[i];
	}
		
	// קלט מספר והגדלת המערך למספר זה של איברים
	cout << "Enter a new size of the array:";
	cin >> new_size;
	v.resize(new_size);

	// קלט איברים חדשים
	for (; i < v.size(); i++)
	{
		cout << "Enter a number:";
		cin >> v[i];
	}
	// פלט
	for (i = 0; i < v.size(); i++)
		cout << "v[" << i << "] = " << v[i] << endl;

}


int main()
{
	dynamic_memory();
	return 0;
}

