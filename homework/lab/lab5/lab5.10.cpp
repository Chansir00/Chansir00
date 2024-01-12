#include <iostream>
#include <cmath>
#include <cassert>

using namespace std;

double legendre(double x, int n) {
    if (n == 0) {
        return 1.0;
    }
    else if (n == 1) {
        return x;
    }
    else {
        return ((2 * n - 1) * legendre(x, n - 1) - (n - 1) * legendre(x, n - 2)) / n;
    }
}

int main() {
    double x;
    int n = 0;
    cout << "计算勒让德多项式,请输入x和n" << endl;
    cin >> x >> n;
    assert(n >= 0); // 确保 n 是非负数

    double result = legendre(x, n);
    cout << "勒让德多项式的值为：" << result << endl;

    return 0;
}
