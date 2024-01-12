#ifndef MYHEAD
#define MYHEAD

#include<iostream>
using namespace std;

//int n 重定义？若程序由多个源文件构成时，全局变量与全局静态变量不同：全局静态变量使得该变量成为定义该变量的源文件所独享，即：全局静态变量对组成该程序的其它源文件是无效的。
class Complex
{
private:
    double m_real = 0;
    double m_imag = 0;
    static int n;
public:
    Complex(double real = 0, double imag = 0);   //构造函数
    Complex(const Complex& rhs);      //拷贝构造
    double real();
    double imag();
    void set(double real, double imag);
    friend ostream& operator<<(ostream& os, const Complex& rhs);
    Complex& operator+(const Complex& rhs);
    Complex& operator-(const Complex& rhs);
    Complex& operator*(const Complex& rhs);
    Complex& operator/(const Complex& rhs);
    Complex& operator=(const Complex& rhs);
    friend bool operator==(const Complex& left, const Complex& right);    //涉及到访问两个对象的函数，需要做友元
    friend bool operator!=(const Complex& left, const Complex& right);  //const成员函数可以被const对象和非const对象调用；非const成员函数只能被非const对象调用，不能被const对象调用
    int number();
    ~Complex();
};
int Complex::n = 0;
#endif