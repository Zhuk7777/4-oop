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
	void increaseByOneAll();

	void setFirst(int _first);
	void setSecond(int _second);
	void setThird(int _third);

	friend std::ostream& operator<< (std::ostream& out, Date& obj);
	friend std::istream& operator>> (std::istream& in, Date& obj);
};