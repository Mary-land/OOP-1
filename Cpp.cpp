#include "Header.h"
#include <iostream>
#include <cmath>
using namespace std;


	void Triangle::Getstruct()
	{
		while (true)
		{
			cout << "������� �������: ";
			cin >> a;
			cout << "������� �������: ";
			cin >> b;
			cout << "������� �������: ";
			cin >> c;
			if (a + b < c || a + c < b || b + c < a)
			{
				cout << "����������� �� ����������!" << endl;
				continue;
			}
			else break;
		}
	}
	void Triangle::Increase(double k)
	{
		a = a*k;
		b = b*k;
		c = c*k;
	}
	void Triangle::Decrease(double k)
	{
		a = a / k;
		b = b / k;
		c = c / k;
	}
	double Triangle::Perimetr()
	{
		return a + b + c;
	}
	double Triangle::Area()
	{
		return 0.25*sqrt((a + b + c)*(a + b - c)*(a + c - b)*(b + c - a));
	}
	void Triangle::Corners(double *corn)
	{
		corn[0] = acos((a*a + c*c - b*b) / (2 * a*c)) * 180 / 3.14159265;
		corn[1] = acos((a*a + b*b - c*c) / (2 * a*b)) * 180 / 3.14159265;
		corn[2] = 180 - corn[0] - corn[1];
	}