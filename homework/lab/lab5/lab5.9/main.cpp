#include "area.h"


int main()
{
    cout << "dot area is " << area() << endl;
    cout << "dot area is " << area(1, 1) << endl;
    cout << "circle area is " << area(0.5) << endl;
    cout << "dot area is " << area(1, 0.5, 1) << endl;
    cout << "triangle area is " << area(1, sqrt(1 + 0.5 * 0.5), sqrt(1 + 0.5 * 0.5), 0) << endl;
    return 0;
}