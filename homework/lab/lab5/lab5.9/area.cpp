#include "area.h"


double area(double radius)
{
    return PI * radius * radius;
}
double area(double length, double height)     //2.若改为lenth = 0,height = 0程序错误.call of overloaded 'area()' is ambiguous无法确定调用的是哪一个重载
{
    return length * height;
}
double area(double bottom, double top, double height)
{
    return (bottom + top) * height / 2;
}
double area(double edge1, double edge2, double edge3, int)
{
    double s = (edge1 + edge2 + edge3) / 2;
    return sqrt(s * (s - edge1) * (s - edge2) * (s - edge3));
}
// 3. redefinition of 'double area(double, double, double)'若去掉int出现两个一致的重载
// 4. default argument missing for parameter 4 of 'double area(double, double, double, int)' and call of overloaded 'area(int, int)' is ambiguous and
// call of overloaded 'area(int, double, int)' is ambiguous 三个错误，无法确定调用的是哪一个重载，默认值缺失

