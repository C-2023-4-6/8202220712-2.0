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
	cout << "请依次输入 10 个数字:" << endl;
	for (int i = 0; i < 10; i++)
    {
		cin >> abc[i];
    }
	sortFromSmallToLarge(abc);
	cout << "将十个数字从小到大排为:" << endl;
	for (int a = 0; a < 10; a++)
	{
		cout << abc[a] << " ";
	}
	system("pause");
	return 0;
}
