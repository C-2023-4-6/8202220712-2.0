#include <iostream>
using namespace std;
void sortFromSmallToLarge(int abc[])
{
	int a, b, k;
	for (a = 0; a < 9; a++)
	{
		for (b = 0; b < 9 - a; b++)
		{
			if (abc[b] > abc[b + 1])
			{
				int temp;
				temp = abc[b];
				abc[b] = abc[b + 1];
				abc[b + 1] = temp;
			}
		}
	}
}
int main()
{
	int abc[10];
	cout << "���������� 10 ������:" << endl;
	for (int i = 0; i < 10; i++)
    {
		cin >> abc[i];
    }
	sortFromSmallToLarge(abc);
	cout << "��ʮ�����ִ�С������Ϊ:" << endl;
	for (int a = 0; a < 10; a++)
	{
		cout << abc[a] << " ";
	}
	system("pause");
	return 0;
}
