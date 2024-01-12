#include <iostream>

using namespace std;

double control(double y, double r, double step)
{
    double y1, y2;
    y1 = y;
    y2 = y + step;
    double e = y2 - r;
    while (abs(e) >= 0.01 * r)
    {
        if (y1 < y2)
        {
            y1 = y2;
            y2 = y1 + step;
        }
        else
        {
            y1 = y2;
            y2 = y1 - step;
        }
        e = y2 - r;
    }
    return y2;
}

int main()
{
    double y, r, step = 0.01;
    cout << "请输入被控量(y),设定值(r)" << endl;
    cin >> y >> r;
    y = control(y, r, step);
    cout << y;
    return 0;
}

