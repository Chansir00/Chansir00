#include <iostream>
using namespace std;

// 作者：陈骏鑫
// 班级：23z232
// 学号：20221002329
// 时间：2023/10/27

//homework 1

// int main()
// {
//     int x = 3, y = 100, flag = 0;
//     while (y / x > 5)
//     {
//         flag++;
//         if (y - x > 25) x = x + 1;
//         else y = y / x;
//     }
//     cout << x << ' ' << y << ' ' << flag; //结果17 100 14
//     return 0;
// }


//homewrok 2.1
// int main()
// {
//     int k = 1, m = 0;
//     for (;k <= 50;k++)
//     {
//         if (m >= 10)
//             break;
//         if (m % 2 == 0)
//         {
//             m += 5;
//             continue;
//         }
//         m -= 3;

//     }
//     cout << m << endl;  //结果11
//     return 0;
// }


//homework 2.2
// int main()
// {
//     int k = 0;
//     char c = 'A';
//     do {
//         switch (++c) {
//         case 'A':
//             k++;
//             break;
//         case 'B':
//             k--;
//         case 'C':
//             k += 2;
//             break;
//         case 'D':
//             k %= 2;
//             continue;
//         case 'E':
//             k *= 10;
//             break;
//         default:
//             k /= 3;
//         }
//         k++;
//     } while (c < 'G');
//     cout << k << endl;
//     return 0;    //结果2
// }


// homework 2.3
#include<cmath>
#include<iomanip>

double calculate(double x1);

int main()
{
    double a;
    cin >> a;
    double re = calculate(a);
    cout << fixed << setprecision(5) << re;
    return 0;

}


double calculate(double a)
{
    double x, x1 = 1;
    do
    {
        x = x1;
        x1 = (x + a / x) / 2;
    } while (abs(x - x1) > 1.0e-5);
    return x1;
}