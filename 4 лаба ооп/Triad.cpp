#include "Triad.h"

Triad::Triad()
{
	first = 0;
	second = 0;
	third = 0;
}

Triad::Triad(int _first, int _second, int _third)
{
	first = _first;
	second = _second;
	third = _third;
}

void Triad::increaseByOneFirst()
{
	first++;
}

void Triad::increaseByOneSecond()
{
	second++;
}

void Triad::increaseByOneThird()
{
	third++;
}

void Triad::increaseByOneAll()
{
	first++;
	second++;
	third++;
}

int Triad::getFirst()
{
	return first;
}

int Triad::getSecond()
{
	return second;
}

int Triad::getThird()
{
	return third;
}

void Triad::setFirst(int _first)
{
	first = _first;
}

void Triad::setSecond(int _second)
{
	second = _second;
}

void Triad::setThird(int _third)
{
	third = _third;
}

std::ostream& operator<<(std::ostream& out, Triad& obj)
{
	out << obj.first << " " << obj.second << " " << obj.third << "\n";
	return out;
}
