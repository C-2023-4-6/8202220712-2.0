#include<iostream>
using namespace std;
int f(int i)
{
	return (i + 1) * 2;
}
int main()
{
	int num = 1;
	for (int day = 10; day > 1; day--)
	{
		num = f(num);

	}
	cout << "桃子的数量为" << num<<endl;
	system("pause");
	return 0;
}