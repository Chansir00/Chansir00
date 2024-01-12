#include "complex.h"
//构造函数
Complex::Complex(double real, double imag) :m_real(real), m_imag(imag) { n++; }
Complex::Complex(const Complex& rhs) :m_real(rhs.m_real), m_imag(rhs.m_imag) { n++; }

//成员函数列表
double Complex::real() {
    return m_real;
}

double Complex::imag() {
    return m_imag;
}

void Complex::set(double real, double imag) {
    m_real = real;
    m_imag = imag;
}
//运算符重载
Complex& Complex::operator=(const Complex& rhs) {
    if (this != &rhs) {
        m_real = rhs.m_real;
        m_imag = rhs.m_imag;
    }
    return *this;
}



Complex& Complex::operator+(const Complex& rhs)
{
    m_real += rhs.m_real;
    m_imag += rhs.m_imag;
    return *this;
}

Complex& Complex::operator-(const Complex& rhs)
{
    m_real -= rhs.m_real;
    m_imag -= rhs.m_imag;
    return *this;
}

Complex& Complex::operator*(const Complex& rhs)
{
    m_real = (m_real * rhs.m_real - m_imag * rhs.m_imag);
    m_imag = (m_imag * rhs.m_real + m_real * rhs.m_imag);
    return *this;
}

Complex& Complex::operator/(const Complex& rhs)
{
    m_real = (m_real * rhs.m_real + m_imag * rhs.m_imag) / (rhs.m_real * rhs.m_real + rhs.m_imag * rhs.m_imag);
    m_imag = (m_imag * rhs.m_real - m_real * rhs.m_imag) / (rhs.m_real * rhs.m_real + rhs.m_imag * rhs.m_imag);
    return *this;
}

bool operator!=(const Complex& left, const Complex& right)  //友元
{
    if (left.m_real != right.m_real || left.m_imag != right.m_imag)
        return true;
    else
        return false;
}

bool operator==(const Complex& left, const Complex& right)
{
    if (left.m_real == right.m_real && left.m_imag == right.m_imag)
        return true;
    else
        return false;
}

int Complex::number()
{
    return n;
}
//友元函数
ostream& operator<<(ostream& os, const Complex& rhs)
{
    os << rhs.m_real << "+" << rhs.m_imag << "i";
    return os;
}

Complex::~Complex() //析构函数
{
    ;
}





