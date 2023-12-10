#include <iostream>
using namespace std;
void merge(const int list1[], int size1, const int list2[], int size2, int list3[])
{
	bool y = true;
	int size3 = 0;
	int c = 0, d = 0;
	for (; c < size1; c++)
	{
		y = true;
		d = 0;
		for (; d < size2; d++)
		{
			if (list1[c] == list2[d])
			{
				y = false;
				break;
			}
		}
		if (y)
		{
			list3[size3] = list1[c];
			size3++;
		}
	}
	d = 0;
	for (; d < size2; d++)
	{
		list3[size3] = list2[d];
		size3++;
	}
	for (int k = 0; k < size3; k++)
	{
		for (int g = 0; g < size3 - k - 1; g++)
		{
			int temp;
			if (list3[g] > list3[g + 1])
			{
				temp = list3[g];
				list3[g] = list3[g + 1];
				list3[g + 1] = temp;
			}
		}
	}
	for (int i = 0; i < size3; i++)
	{
		cout << list3[i] << " ";
	}
}
int main()
{
	int size1, size2;
	cout << "size 1" << endl;
	cin >> size1 ;
	int* list1 = new int[size1];
	cout << "size 2" << endl;
	cin >>size2;
	int* list2 = new int[size2];
	int* list3 = new int[size2+size1];
	cout << "list1" << endl;
	int a = 0;
	int b = 0;
	for (; a < size1; a++)
	{
		cin >> list1[a];
	}
	cout << "list2" << endl;
	for (; b < size2; b++)
	{
		cin >> list2[b];
	}
	merge(list1, size1, list2, size2, list3);
	system("pause");
	return 0;
}