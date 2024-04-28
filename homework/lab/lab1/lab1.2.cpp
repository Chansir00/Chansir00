#include <cmath>
#include <iostream>

using namespace std;

// // int main() {
// //   const double pi = 3.14;
// //   double rad, vol, s;
// //   cout << "Please input the radius of the ball" << endl;
// //   cin >> rad;
// //   vol = 4 / 3 * pi * pow(rad, 3);
// //   s = 4 * pi * pow(rad, 2);
// //   cout << "vol = " << vol << endl;
// //   cout << "S = " << s << endl;
// //   return 0;
// // }

// #include <iostream>
// using namespace std;

int main() {
    double a, b, c, v, s;
    cout << "输入长宽高：";
    cin >> a >> b >> c;
    v = a * b * c;
    s = 2 * (a * b + b * c + a * c);
    cout << "v=" << v << endl;
    cout << "s=" << s;
    return 0;
}
