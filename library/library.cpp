#include"Muhamedzhanova.h"
#include <iostream>
#include <string>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	cout<<"Сумма = "<<sum(12.5, 24.8) << endl;
	float b = sum(14.8, 72.5);
	cout << "Сумма = " << b << endl;
	int c = sum(4, 8);
	cout << "Сумма = " << c << endl;
	cout << "Разность = " << dif(19.8, 2.2) << endl;
	cout << "Произведение = " << multiply(1.4, 5.7) << endl;
	cout << "Частное = " << Div(30.8, 2.7) << endl;
	cout <<"Минимальное: "<< _min(2.5, 2.5) << endl;
	cout << "Максимальное: " << _max(2.5, 9.1) << endl;
	cout << "Положительное число: " << poz(-3) << endl;
	cout << "Отрицательное число: " << neg(-3) << endl;
	cout << "Чётное число: " << chet(3) << endl;
	cout << "Нечётное число: " << nechet(7) << endl;
	cout << "Среднее арифметическое: " << average(2.6, 7.9) << endl;
}
