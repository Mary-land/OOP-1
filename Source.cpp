#include <iostream>
#include "Header.h"
using namespace std;

int main(int argc, char *argv[])
{
	setlocale(LC_ALL, "Russian");
	int i;
	int n;
	cout << "������� ���������� �������������:";
	cin >> n;
	Triangle *one = new Triangle[n];
	for (int j = 0; j < n; j++)
	{
		one[j].Getstruct();
		cout << endl;
	}
	cout << "�������� ����������� � ������� ������ ��������: ";
	cin >> n;
	n -= 1;
	while (true)
	{
		cout << "�������� ��������:" << endl;
		cout << "1 - ��������� �������" << endl;
		cout << "2 - ��������� �������" << endl;
		cout << "3 - ��������" << endl;
		cout << "4 - �������" << endl;
		cout << "5 - ����" << endl;
		cin >> i;
		switch (i) {
		case 1:
		{
			double k;
			cout << "������� �����: ";
			cin >> k;
			one[n].Increase(k);
			cout << "�������: a=" << one[n].a << " b=" << one[n].b << " c=" << one[n].c;
		    break;
		}
	    case 2:
		{
			double k;
			cout << "������� �����: ";
			cin >> k;
			one[n].Decrease(k);
			cout << "�������: a=" << one[n].a << " b=" << one[n].b << " c=" << one[n].c;
			break;
		}
		case 3:
		{
			cout << "�������� = " << one[n].Perimetr();
			break;
		}
		case 4:
		{
			cout << "������� = " << one[n].Area();
			break;
		}
		case 5:
		{
			double *corn = new double[3];
			one[n].Corners( corn);
			cout << "���� ����� a � c = " << corn[0] << " ��������" << endl;
			cout << "���� ����� a � b = " << corn[1] << " ��������" << endl;
			cout << "���� ����� b � c = " << corn[2] << " ��������" << endl;
			break;
		}
		default:
		{
			cout << ("������ �����!") << endl;
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