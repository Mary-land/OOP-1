#include <iostream>
#include "Header.h"
using namespace std;

int main(int argc, char *argv[])
{
	setlocale(LC_ALL, "Russian");
	int i;
	int n;
	cout << "Введите количество треугольников:";
	cin >> n;
	Triangle *one = new Triangle[n];
	for (int j = 0; j < n; j++)
	{
		one[j].Getstruct();
		cout << endl;
	}
	cout << "Выберете треугольник с которым будете работать: ";
	cin >> n;
	n -= 1;
	while (true)
	{
		cout << "Выберите действие:" << endl;
		cout << "1 - увеличить стороны" << endl;
		cout << "2 - уменьшить стороны" << endl;
		cout << "3 - Периметр" << endl;
		cout << "4 - Площадь" << endl;
		cout << "5 - Углы" << endl;
		cin >> i;
		switch (i) {
		case 1:
		{
			double k;
			cout << "Введите число: ";
			cin >> k;
			one[n].Increase(k);
			cout << "Стороны: a=" << one[n].a << " b=" << one[n].b << " c=" << one[n].c;
		    break;
		}
	    case 2:
		{
			double k;
			cout << "Введите число: ";
			cin >> k;
			one[n].Decrease(k);
			cout << "Стороны: a=" << one[n].a << " b=" << one[n].b << " c=" << one[n].c;
			break;
		}
		case 3:
		{
			cout << "Периметр = " << one[n].Perimetr();
			break;
		}
		case 4:
		{
			cout << "Площадь = " << one[n].Area();
			break;
		}
		case 5:
		{
			double *corn = new double[3];
			one[n].Corners( corn);
			cout << "Угол между a и c = " << corn[0] << " градусов" << endl;
			cout << "Угол между a и b = " << corn[1] << " градусов" << endl;
			cout << "Угол между b и c = " << corn[2] << " градусов" << endl;
			break;
		}
		default:
		{
			cout << ("Ошибка ввода!") << endl;
			i = 7;
		}
		}
		cout << endl;
		if (i != 7)
		{
			continue;
		}
		else { break; }
	}
	system("pause");
	return 0;
}