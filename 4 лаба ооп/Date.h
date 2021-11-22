#pragma once
#include"Triad.h"
#include<string>

class Date :public Triad
{
	enum LEAPYEAR {LEAP,NOTLEAP};
	LEAPYEAR lYear();
	void edit();

public:

	Date();
	Date(int day, int month, int year);

	void addNday(int n);
	
	void increaseByOneFirst();
	void increaseByOneSecond();
	void increaseByOneThird();
	void increaseByOneAll();

	friend std::ostream& operator<< (std::ostream& out, Date& obj);
	friend std::istream& operator>> (std::istream& in, Date& obj);
};