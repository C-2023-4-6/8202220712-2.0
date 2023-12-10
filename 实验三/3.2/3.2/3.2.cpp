#include <iostream>
using namespace std;
bool is_prime(int num)
{
	if (num == 2)
	{
		return true;
	}
	if (num % 2 == 0 || num < 2)
	{
		return false;
	}
	else
	{
		for (int i = 3; i * i <= num; i += 2)
		{
			if (num % i == 0)
			{
				return false;
			}
		}
		return true;
	}
}
int main()
{
	int result, i, a, count;
	count = 0;
	a = 1;
	while (count < 200)
	{
		a++;
		if (is_prime(a))
		{
			count++;
			cout << a << " ";
			if (count % 10 == 0)
			{
				cout << endl;
			}
		}
	}
	system("pause");
	return 0;
}