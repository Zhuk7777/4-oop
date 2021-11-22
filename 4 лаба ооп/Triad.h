#pragma once
#include<iostream>

class Triad
{
protected:
	int first;
	int second;
	int third;

public:

	Triad();
	Triad(int _first, int _second, int _third);

	void increaseByOneFirst();
	void increaseByOneSecond();
	void increaseByOneThird();
	void increaseByOneAll();

	int getFirst();
	int getSecond();
	int getThird();

	void setFirst(int _first);
	void setSecond(int _second);
	void setThird(int _third);

	friend std::ostream& operator<< (std::ostream& out, Triad& obj);
	friend std::istream& operator>> (std::istream& in, Triad& obj);

};
