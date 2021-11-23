#include"Date.h"
#include"Triad.h"

int check() {
	int x;
	std::cin >> x;
	while (!std::cin)
	{
		std::cin.clear();
		std::cin.ignore();
		std::cout << "����� ������ �����" << std::endl;
		std::cin >> x;
	}
	return x;
}

void menu()
{
	std::cout << "1- ������ �����\n2-������ �����\n3-������ ���\n4- ������� ��� ����������\n5-�������� �����\n"
		<< "6-�������� �����\n7-�������� ���\n8-������ ����� ����\n9-�������� ���� �� �������\n"
		<< "10-��������� ���� �� n ����\n";
}

int main()
{
	setlocale(0, "");

	std::cout << "������� 3 �����(����)\n";
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
			std::cout << "����� ������ ����� �� 1 �� 10\n";
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
			std::cout << "������� �����\n";
			std::cin >> number;
			dAte.setFirst(number);

			dAte.lYear();
			dAte.edit();
			break;

		case 6:
			std::cout << "������� �����\n";
			std::cin >> number;
			dAte.setSecond(number);

			dAte.lYear();
			dAte.edit();
			break;

		case 7:
			std::cout << "������� �����\n";
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
			std::cout << "������� ���������� ����\n";
			std::cin >> number;
			dAte.addNday(number);
			break;
		}

		std::cout << "0-��������� ������ ���������, 1-����������\n";
		choice = check();

		while (choice < 0 || choice>1)
		{
			std::cout << "����� ������ 0 ��� 1\n";
			choice = check();
		}
	}
	return 0;
}