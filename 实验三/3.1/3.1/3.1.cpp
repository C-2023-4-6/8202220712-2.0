#include <iostream>
using namespace std;
int yin(int m, int n)
{
    int result;
    int i;
    for (i = 1; i <= m && i <= n; i++)
    {
        if (m % i == 0 && n % i == 0)
        {
            result = i;
        }
    }
    return result;
}
int bei(int m, int n)
{
    int result;
    int i, c;
    if (m < n)
    {
        c = n;
    }
    else
    {
        c = m;
    }
    for (i = c; i <= m * n; i++)
    {
        if (i % m == 0 && i % n == 0)
        {
            result = i; break;
        }
    }
    return result;
}
int main()
{
    int a, b, c, d;
    cout << "������Ȼ�� a��b" << endl;
    cin >> a >> b;
    c = yin(a, b);
    d = bei(a, b);
    cout << "a��b �������Ϊ" << c << endl << "a,b ��С������Ϊ" << d << endl;
    system("pause");
    return 0;
}
