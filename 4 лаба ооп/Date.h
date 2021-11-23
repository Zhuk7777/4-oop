#pragma once
#include"Triad.h"
#include<string>

enum LEAPYEAR { LEAP, NOTLEAP };

class Date :public Triad
{

public:

	Date();
	Date(int day, int month, int year);

	void addNday(int n);
	
	LEAPYEAR lYear();
	void edit();

	friend std::ostream& operator<< (std::ostream& out, Date& obj);
	friend std::istream& operator>> (std::istream& in, Date& obj);
};