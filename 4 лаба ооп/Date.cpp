#include "Date.h"

Date::LEAPYEAR Date::lYear()
{
	std::string year = std::to_string(third);
	int size = year.size();

	LEAPYEAR type;

	if (year[size - 2] == '0' && year[size - 1] == '0' && third % 400 == 0)
		type = LEAP;
	else {
		if (third % 4 == 0 && (year[size - 2] != '0' || year[size - 1] != '0'))
			type = LEAP;
		else
			type = NOTLEAP;
	}
	return type;
}


Date::Date() :Triad(1,1,2021)
{}


Date::Date(int day, int month, int year): Triad(day,month,year)
{
	edit();
}


void Date::addNday(int n)
{
	first += n;
	edit();
}

void Date::increaseByOneFirst()
{
	first++;
	edit();
}

void Date::increaseByOneSecond()
{
	second++;
	edit();
}

void Date::increaseByOneAll()
{
	first++;
	second++;
	third++;
	edit();
}

void Date::setFirst(int _first)
{
	first = _first;
	edit();
}

void Date::setSecond(int _second)
{
	second = _second;
	edit();
}

void Date::setThird(int _third)
{
	third = _third;
	edit();
}


void Date::edit()
{
	if (second > 12) {
		third += second / 12;
		second %= 12;
	}

	if (first == 0)
		first = 1;

	if (second == 0)
		second = 1;

	if (third == 0)
		third = 2021;

	LEAPYEAR year = lYear();

	bool flag = 0;
	while (!flag)
	{
		flag = 1;

		if (first > 28 && second == 2 && year == NOTLEAP) 
		{
			first -= 28;
			second++;
			flag = 0;
		}

		if (first > 29 && second == 2 && year == LEAP)
		{
			first -= 29;
			second++;
			flag = 0;
		}

		if (first > 31 && (second == 1 || second == 3 || second == 5 || second == 7 || second == 8 || second == 10 || second == 12))
		{
			first -= 31;
			second++;
			flag = 0;
		}

		if (first > 30 && (second == 4 || second == 6 || second == 9 || second == 11))
		{
			first -= 30;
			second++;
			flag = 0;
		}

		if (second > 12)
		{
			third += second / 12;
			second %= 12;
			year = lYear();
		}
	}

}


std::ostream& operator<<(std::ostream& out, Date& obj)
{
	std::string date;

	if (obj.first < 9)
		date += '0';
	date += std::to_string(obj.first);
	date += '.';

	if (obj.second < 9)
		date += '0';
	date += std::to_string(obj.second);
	date += '.';

	date += std::to_string(obj.third);

	out << date << "\n";

	return out;
}

std::istream& operator>>(std::istream& in, Date& obj)
{
	int number;

	in >> number;
	obj.setFirst(number);
	in >> number;
	obj.setSecond(number);
	in >> number;
	obj.setThird(number);

	obj.edit();

	return in;
}

