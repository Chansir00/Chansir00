#include <iostream>
using namespace std;

void index(int array[], int size, int key, int& sub)   //sub是在主函数中的变量，去掉&为值传参，不会改变主函数值
{
    sub = -1;
    for (int i = 0; i < size; i++)
    {
        if (array[i] == key)
        {
            sub = i;
            break;
        }
    }
    // if (sub != -1)
    // {
    //     cout << "对应元素的下标为" << sub << endl;
    // }
    // else
    // {
    //     cout << "未找到" << endl;
    // }
}

int main()
{
    int array[25] = { 2,3,5,7,11,13,17,19,23,29,31,37,41,43,47,53,59,61,67,71,73,79,83,89,97 };
    int size = 25, key, sub, flag;
    cout << "请输入要查找的数字(输入0结束程序)" << endl;
    cin >> key;
    while (key)
    {
        index(array, size, key, sub);
        if (sub != -1)
        {
            cout << "对应元素的下标为" << sub << endl;
        }
        else
        {
            cout << "未找到" << endl;
        }
        cout << "请输入要查找的数字(输入0结束程序)" << endl;
        cin >> key;
    }
    return 0;
}