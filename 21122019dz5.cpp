#include <iostream>
#include <Windows.h>
using namespace std;

int main()
{
	SetConsoleOutputCP(1251);
	cout << "Задание № 5.\n";
	cout << "\n";
	cout << "Написать программу, которая преобразует введенное пользователем количество\n";
	cout << "дней в количество полных недель и оставшихся дней. Например, пользователь ввел 17 дней,\n";
	cout << "программа должна вывести на экран 2 недели и 3 дня.\n";
	cout << "\n";
	cout << "Решение для задания № 5:\n";
	cout << "\n";
	double dni_all, nedel, dni_rest;
	cout << "Введите количество дней : ";
	cin >> dni_all; //17
	nedel = int(dni_all / 7);
	dni_rest = dni_all - nedel * 7;
	cout << nedel << " недель(и) и " << dni_rest << " дня(ей)" << endl;
}
