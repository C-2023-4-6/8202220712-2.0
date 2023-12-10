#include <iostream>
using namespace std;
int main()
{
	int b, c, i;
	int box[100];
	for (int a = 0; a < 100; a++)
	{
		box[a] = 0;
	}
	for (i = 0; i < 100; i++)
	{
		for (b = i; b < 100; b = b + i + 1)
		{
			box[b]++;
		}
	}
	for (c = 0; c < 100; c++)
	{
		if (box[c] % 2 == 1)
			cout << c + 1 << " ";
	}
	system("pause");
	return 0;
}