#include <iostream>

using namespace std;

void get_address(int *a, int *num);

int main()
{
    int a, b, num;
    a = 100; //地址0x61fe1c
    b = 100;
    num = a; //地址0x61fe18
    int *p = &a;
    cout << &a << endl;
    cout << &num << endl;
    cout << &b << endl;
    get_address(&a, &num);
    return 0;
}

void get_address(int *p, int *num)
{
    *p += 5;
    *num += 5;
}