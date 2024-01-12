#include <stdio.h>
#include <iostream>
using namespace std;

int main()
{
    int array[] = { 2, 3, 121, 32, 54, 13, 656, 34 };
    int* p = array;
    auto* pp = &p;

    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8 - i; j++)
        {
            if (p[j] < p[j - 1])
            {
                swap(p[j], p[j - 1]);

            }
        }
    }
    for (auto i = 0; i < 8; i++)
    {
        cout << array[i] << endl;;
    }

    cout << sizeof(pp);
    return 0;
}

/*
指针指向字符串和字符数组的区别
指针在函数中对参数的改变
多个指针同时存在
*/
