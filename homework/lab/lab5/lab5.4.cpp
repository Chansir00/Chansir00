#include<iostream>

using namespace std;

double sroot(double val)
{
    double x1 = val / 2, x2;
    x2 = (x1 + val / x1) / 2;
    while (abs(x1 - x2) > 1e-6)
    {
        x1 = x2;
        x2 = (x1 + val / x1) / 2;
    }
    return x2;
}

int main()
{
    double val;
    cout << "请输入一个正数：" << endl;
    cin >> val;
    while (val < 0)
    {
        cout << "请输入一个正数：" << endl;
        cin >> val;
    }
    cout << sroot(val);
    return 0;
}