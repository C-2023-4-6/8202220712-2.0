#pragma once
#include <iostream>
using namespace std;
double celsius_to_fah(double cel)//����������
{
	double fah;//fah ָ����
	fah = 9.0 / 5 * cel + 32;
	return fah;
}
double fahrenheit_to_cels(double fah)//����������
{
	double cel;
	cel = (5.0 / 9) * (fah - 32);
	return cel;
}
