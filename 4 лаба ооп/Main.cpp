#include"Date.h"
#include"Triad.h"

int main()
{
	setlocale(0, "");
	Date a(29, 2, 1904);
	//a.addNday(5);
	std::cout << a;
}