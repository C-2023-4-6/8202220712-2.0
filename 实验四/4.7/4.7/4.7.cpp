#include <iostream>
#include <cstring>
#include <string>
using namespace std;
void indexof(const char *s1,const char *s2)
{
	int length1 = strlen(s1);//s1 ���Ӵ�
	int length2 = strlen(s2);
	bool isSon = true;
	int d = 0;
	int i = 0;
	int c = 0;
	int a;
	for (a = 0; a < length2; a++)
	{
		if (*(s1 + i) == *(s2 + a))
		{
			i++;
		}
		else i = 0;
		if (i == length1)
		{
			cout << "s1 �� s2 ���Ӵ�" << endl << "��һ����Ե��±���" << a - length1 + 1;
			break;
		}
	}
}
int main()
{
	char s1[100], s2[100];
	cout << "���� s1" << endl;
	cin.getline(s1, 100);
	cout << "���� s2" << endl;
	cin.getline(s2, 100);
	indexof(s1, s2);
	system("pause");
	return 0;
}