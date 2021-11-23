#include"Date.h"
#include"Triad.h"

int check() {
	int x;
	std::cin >> x;
	while (!std::cin)
	{
		std::cin.clear();
		std::cin.ignore();
		std::cout << "нужно ввести число" << std::endl;
		std::cin >> x;
	}
	return x;
}

void menu()
{
	std::cout << "1- узнать число\n2-узнать мес€ц\n3-узнать год\n4- вывести всю информацию\n5-помен€ть число\n"
		<< "6-помен€ть мес€ц\n7-помен€ть год\n8-ввести новую дату\n9-увеличть пол€ на единицу\n"
		<< "10-увеличить дату на n дней\n";
}

int main()
{
	setlocale(0, "");

	std::cout << "¬ведите 3 числа(дату)\n";
	Date dAte;
	std::cin >> dAte;

	int choice = 1;
	int number;

	while (choice)
	{
		menu();

		choice = check();
		while (choice < 1 || choice>10)
		{
			std::cout << "Ќужно ввести чсило от 1 до 10\n";
			choice = check();
		}

		switch (choice) 
		{
		case 1:
			std::cout << dAte.getFirst() << "\n";
			break;

		case 2:
			std::cout << dAte.getSecond() << "\n";
			break;

		case 3:
			std::cout << dAte.getThird() << "\n";
			break;

		case 4:
			std::cout << dAte;
			break;

		case 5:
			std::cout << "¬ведите число\n";
			std::cin >> number;
			dAte.setFirst(number);

			dAte.lYear();
			dAte.edit();
			break;

		case 6:
			std::cout << "¬ведите число\n";
			std::cin >> number;
			dAte.setSecond(number);

			dAte.lYear();
			dAte.edit();
			break;

		case 7:
			std::cout << "¬ведите число\n";
			std::cin >> number;
			dAte.setThird(number);

			dAte.lYear();
			dAte.edit();
			break;

		case 8:
			std::cin >> dAte;
			break;

		case 9:
			dAte.increaseByOneAll();

			dAte.lYear();
			dAte.edit();
			break;

		case 10:
			std::cout << "¬ведите количество дней\n";
			std::cin >> number;
			dAte.addNday(number);
			break;
		}

		std::cout << "0-завершить работу программы, 1-продолжить\n";
		choice = check();

		while (choice < 0 || choice>1)
		{
			std::cout << "Ќужно ввести 0 или 1\n";
			choice = check();
		}
	}
	return 0;
}