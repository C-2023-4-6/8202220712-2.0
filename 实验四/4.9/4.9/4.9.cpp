#include <iostream>
using namespace std;
void sort(int* number,int size)
{
	int a;
	int b;
	for (a = 0; a < size - 1; a++)
	{
		for (b = 0; b < size - 1 - a; b++)
		{
			if (number[b] > number[b + 1])
			{
				int temp;
				temp = number[b];
				number[b] = number[b + 1];
				number[b + 1] = temp;
			}
		}
	}
}
int main()
{
	cout << "����������Ĵ�С" << endl;
	int n;
	cin >> n;
	int* p = new int[n];
	cout << "���������������" << endl;
	for (int i = 0; i < n; i++)
	{
		cin >> p[i];
	}
	sort(p, n);
	cout << "������Ԫ�ذ���С�����˳����Ϊ" << endl;
	for (int i = 0; i < n; i++)
	{
		cout << p[i]<<" ";
	}
	system("pause");
	return 0;
}