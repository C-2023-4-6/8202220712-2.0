#pragma once
#include <iostream>
using namespace std;
double celsius_to_fah(double cel)//摄氏至华氏
{
	double fah;//fah 指华氏
	fah = 9.0 / 5 * cel + 32;
	return fah;
}
double fahrenheit_to_cels(double fah)//华氏至摄氏
{
	double cel;
	cel = (5.0 / 9) * (fah - 32);
	return cel;
}
