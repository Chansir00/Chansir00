#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "请输入一个数" << endl;
    cin >> n;
    if (n % 3 == 0)
    {
        if (n % 7 == 0)
            cout << n << "既是3的倍数又是7的倍数";
        else
            cout << n << "是3的倍数不是7的倍数";
    }
    else
    {
        if (n % 7 == 0)
            cout << n << "是7的倍数不是3的倍数";
        else
            cout << n << "既不是3的倍数也不是7的倍数";
    }
    return 0;
}