#include <iostream>
#include <string>
#include <cmath>
using namespace std;
void eswitch()
{
	int length;
	cout << "请输入一个 16 进制的数字" << endl;
	string hex;
	cin >> hex;
	length = hex.length();
	int d = length - 1;
	for (int c = 0; c < d; c++, d--)
	{
		int temp;
		temp = hex[c];
		hex[c] = hex[d];
		hex[d] = temp;
	}
	int *num=new int [length];
	for (int i=0; i < length; i++)
	{
		switch (hex[i])
		{
		case '0':num[i] = 0 * pow(16, i); break;
		case '1':num[i] = 1 * pow(16, i); break;
		case '2':num[i] = 2 * pow(16, i); break;
		case '3':num[i] = 3 * pow(16, i); break;
		case '4':num[i] = 4 * pow(16, i); break;
		case '5':num[i] = 5 * pow(16, i); break;
		case '6':num[i] = 6 * pow(16, i); break;
		case '7':num[i] = 7 * pow(16, i); break;
		case '8':num[i] = 8 * pow(16, i); break;
		case '9':num[i] = 9 * pow(16, i); break;
		case 'a':num[i] = 10 * pow(16, i); break;
		case 'b':num[i] = 11 * pow(16, i); break;
		case 'c':num[i] = 12 * pow(16, i); break;
		case 'd':num[i] = 13 * pow(16, i); break;
		case 'e':num[i] = 14 * pow(16, i); break;
		case 'f':num[i] = 15 * pow(16, i); break;
		case 'A':num[i] = 10 * pow(16, i); break;
		case 'B':num[i] = 11 * pow(16, i); break;
		case 'C':num[i] = 12 * pow(16, i); break;
		case 'D':num[i] = 13 * pow(16, i); break;
		case 'E':num[i] = 14 * pow(16, i); break;
		case 'F':num[i] = 15 * pow(16, i); break;
		default:cout << "输入错误"; break;
		}
	}
	int sum = 0;
	for (int a = 0; a < length; a++)
	{
		sum = sum + num[a];
	}
	cout << "转化为十进制为" << sum;
}
int main()
{
	int a = 1;
	eswitch();
	system("pause");
	return 0;
}