#ifndef RECT_H
#define RECT_H

#include <iostream>
using namespace std;

class rect
{
private:
    //坐标
    int m_left;
    int m_top;
    int m_right;
    int m_bottom;
public:
    rect(int left = 0, int top = 0, int right = 0, int bottom = 0);  //1.改变后不能正常运行，因为不指定默认参数，则创建对象时需要给定参数
    rect(const rect& rhs);

    void show();     //2.成员函数可以不带参数，因为其可以直接访问类内部成员，在函数体中调用
    void assign(int left, int top, int right, int bottom);
    int area();
    int perimeter();
    ~rect() {};
};

#endif
