#include"3.3.h"
#include <iostream>
using namespace std;
int main()
{
	double cel;
	double fah;
	cout<<"����һ�������¶�" ;
	cin>>cel;
	cout<<"ת��Ϊ�����¶�Ϊ" << celsius_to_fah(cel)<<endl;
	cout<<"����һ�������¶�" ;
	cin>>fah;
	cout<<"ת��Ϊ�����¶�Ϊ" <<fahrenheit_to_cels(fah) <<endl;
	system("pause");
	return 0;
}