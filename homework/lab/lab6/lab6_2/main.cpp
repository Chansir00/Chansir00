#include "rect.h"
int main()
{
    rect r;
    r.show();
    r.assign(100, 200, 300, 400);
    r.show();
    rect r1(0, 0, 200, 200);
    rect r2(r1);
    r2.show();
    r1.show();
    r1.assign(100, 200, 300, 400);
    cout << "Area :" << r.area() << "  Perimeter:" << r.perimeter() << endl;
    return 0;
}