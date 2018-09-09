// CPP_GitHub.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

class Date
{
private:
	int day, month, year;
public:
	/*For h file*/
	//void init(int dd, int mm, int yy);

	//void add_day(int n);
	//void add_month(int n);
	//void add_year(int n);

	//int get_day() const; // Return day
	//int get_month() const; // Return month
	//int get_year() const; // Return year

	Date() // The constructor
	{
		day = 1, month = 1, year = 1970;
	}
	Date(int dd, int mm, int yy)
	{
		day = dd, month = mm, year = yy;
	}

	void init(int dd, int mm, int yy)
	{
		day = dd;
		month = mm;
		year = yy;
	}

	void add_day(int n)
	{
		day += n;
	}
	void add_month(int n)
	{
		month += n;
	}
	void add_year(int n)
	{
		year += n;
	}

	int get_day() const
	{
		return day;
	}
	int get_month() const
	{
		return month;
	}
	int get_year() const
	{
		return year;
	}
	~Date()
	{
		// יש לשחרר הזיכרון שהוקצה
		cout << "```" << endl;
	}
};


void classes()
{
	Date t;
	cout << t.get_day() << "." << t.get_month() << "." << t.get_year() << endl;
	Date time(1,2,2000);
	cout << time.get_day() << "." << time.get_month() << "." << time.get_year() << endl;
	time.init(5,9,2018);
	cout << time.get_day() << "." << time.get_month() << "." << time.get_year() << endl;
	time.add_day(1);
	cout << time.get_day() << "." << time.get_month() << "." << time.get_year() << endl;
	// time.day = 80; XX PRIVATE XX !! שגיאה
}	


int main()
{
	classes();
	return 0;
}
