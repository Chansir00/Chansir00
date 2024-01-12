#include <iostream>
#include <cmath>
#include <assert.h>
#include<iomanip>
using namespace std;



int main()
{
    int a, b, c;
    double x, x1, x2, delta;
    cout << "请依次输入a b c 的值：" << endl;
    cin >> a >> b >> c;
    delta = pow(b, 2) - 4 * a * c;
    assert(a != 0 || b != 0);
    if (a == 0)
    {
        x = -c / b;
        cout << "x=" << x;
    }
    else
    {
        if (delta > 0)
        {
            x1 = (-b + sqrt(delta)) / 2 / a;
            x2 = (-b - sqrt(delta)) / 2 / a;
            cout << "x1 = " << x1 << endl;
            cout << "x2 = " << x2 << endl;
        }
        else if (delta == 0)
        {
            x = (-b + sqrt(delta)) / 2 / a;
            cout << "x=" << x;
        }
        else
        {
            double j, k;
            j = -b / 2.0 / a;
            k = sqrt(4 * a * c - pow(b, 2)) / 2 / a;
            cout << "x1=" << j <<'+' <<k<<'i' << endl;
            cout << "x2=" << j<<'-'<< k<<'i' << endl;

        }
    }
    return 0;
}




