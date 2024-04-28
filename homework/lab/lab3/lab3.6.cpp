#include <iostream>
#include<iomanip>
using namespace std;

int jc(int i);


int main()
{
    int n = 1;
    double sum = 0, term = 1, pi;
    do {
        sum += term;
        n++;
        term = term * (n - 1) / (2 * n - 1.0);
    } while (term >= 1.0e-10);
    pi = sum * 2;
    cout << fixed << setprecision(10) << "pi=" << pi << endl;
    return 0;
}

//求e值
// int main()
// {
//     int n = 1;
//     double sum = 1, term = 1;
//     do {
//         sum += term;
//         n++;
//         term = 1.0 / jc(n);
//     } while (term >= 1.0e-10);
//     cout << fixed << setprecision(10) << "e=" << sum << endl;
//     return 0;
// }


int jc(int i)
{
    int n = 1;
    for (int j = 1; j <= i; j++)
    {
        n *= j;
    }
    return n;
}