#include "complex.h"


int main()
{
    Complex a(2, 3);
    Complex b(1, 1);
    cout << b + a << endl;
    cout << b.number() << endl;
    cout << a.real() << a.imag() << endl;
    a.set(3, 4);
    cout << a + b << endl;
    cout << a - b << endl;
    cout << a * b << endl;
    cout << a / b << endl;
    if (a == b)
        cout << "a eq b" << endl;
    if (a != b)
        cout << "a neq b" << endl;
    return 0;
}