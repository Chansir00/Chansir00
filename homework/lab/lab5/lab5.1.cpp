#include <iostream>
using namespace std;
int value1 = 300, value2 = 400, value3 = 500;
void funa(int value3)
{
    static int value1 = 5;     // 静态变量，用于记住上一次的值
    value1 += value3;
    cout << value1 << ' ' << value3 << endl;
}

void funb(int value1)
{
    value1 = value2;
    cout << value1 << endl;
}

void func()
{
    int value3 = 0;
    cout << value1 << ' ' << value2 << ' ' << value3 << endl;
    ::value3 -= 100;  // 从全局变量 value3 中减去 100
}

int main()
{
    funa(value1);
    funb(value2);
    funa(value2);
    func();
    cout << value1 << ' ' << value2 << ' ' << value3 << endl;
    return 0;
}