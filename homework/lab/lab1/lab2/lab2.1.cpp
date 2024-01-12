#include <iostream>
using namespace std;

int main()
{
    int r = 0;
    const double pi = 3.1415926;
    double area, sum = 0;
    area = pi * r * r;
    sum += area;
    cout << "The area is " << area << "\n The sum area is \t" << sum << endl;
    ++r;
    area = pi * static_cast<double>(r * r);
    { 
        decltype(area) sum = 0;
        sum += area;
        cout << "The sum area is " << sum << endl;
    }

    cout << "The area is " << area << "\n The sum area is\t" << sum << endl;
    cout << "The size of r " << sizeof(r) << ' ' << "The size of int " << sizeof(int) << endl;
    cout << "The size of area " << sizeof(area) << ' ' << "The size of double " << sizeof(double) << endl;

    return 0;
}