#include <iostream>
using namespace std;

// int& index(int array[], int num)
// {
//     return array[num];     //返回为int 类型引用
// }
int* index(int* array, int n)
{
    array += n;
    return array;
}

// int& index(int& num)
// {
//     num++;
//     return num;
// }

int main()
{
    int array[] = { 2,4,6,8,10 };
    *index(array, 3) = 16;    //&array[3]
    // array[3] = 16;
    for (int i = 0; i < 5; i++)
    {
        cout << *index(array, i) << endl;
    }
    // for (int i = 0;i < 5;i++)
    // {
    //     cout << index(i, array) << endl;
    // }
    return 0;
}





// int& c = num;
// cout << &c << endl;
// int& b = index(num);     //引用既可作左值也可以做右值

// return 0;
// cout << index(index(index(index(num)))) << endl;
// int& c = index(num);      //左值还是右值
// int&& b = index(num);   //左值还是右值
// cout << c << endl;
// cout << b << endl;
// cout << index(num);    //左值还是右值