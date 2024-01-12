#include "rect.h"

rect::rect(int left, int top, int right, int bottom) :m_left(left), m_top(top), m_right(right), m_bottom(bottom) {}
//拷贝构造函数
rect::rect(const rect& rhs) : m_left(rhs.m_left), m_top(rhs.m_top), m_right(rhs.m_right), m_bottom(rhs.m_bottom) {}

void rect::show()
{
    cout << "left: " << m_left << endl;
    cout << "top: " << m_top << endl;
    cout << "right: " << m_right << endl;
    cout << "bottom: " << m_bottom << endl;
}

void rect::assign(int left, int top, int right, int bottom)
{
    m_left = left;
    m_top = top;
    m_right = right;
    m_bottom = bottom;
}
//3,assign 不能去掉，assign函数是为矩形类的属性赋值，可以调用多次，而rect类的构造函数只能调用一次

int rect::area()
{
    return(m_right - m_left) * (m_bottom - m_top);
}

int rect::perimeter()
{
    return 2 * (m_right - m_left) + 2 * (m_bottom - m_top);
}
