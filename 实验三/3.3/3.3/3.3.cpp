#include"3.3.h"
#include <iostream>
using namespace std;
int main()
{
	double cel;
	double fah;
	cout<<"输入一个摄氏温度" ;
	cin>>cel;
	cout<<"转化为华氏温度为" << celsius_to_fah(cel)<<endl;
	cout<<"输入一个华氏温度" ;
	cin>>fah;
	cout<<"转化为摄氏温度为" <<fahrenheit_to_cels(fah) <<endl;
	system("pause");
	return 0;
}