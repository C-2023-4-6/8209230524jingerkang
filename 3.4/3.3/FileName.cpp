#include <iostream>
#include <cmath>
#include "mytriangle.h"
using namespace std;
bool is_valid(double side1, double side2, double side3);
double double_area(double side1, double side2, double side3);

int main()
{
	double side1, side2, side3;
	cout << "�������߳�: " << endl;
	cin >> side1 >> side2 >> side3;
	if (is_valid(side1, side2, side3))
		cout << "���Ϊ��" << double_area(side1, side2, side3) << endl;
	else
		cout << "������������" << endl;

	return 0;

}

