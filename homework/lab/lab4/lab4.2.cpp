#include <iostream>
using namespace std;

void PrintArr(int* p, int num);
int main()
{
    int value[10];
    int* p = &value[9];
    for (int i = 1; i <= 10; i++)
    {
        cout << "请输入第" << i << "个整数" << endl;
        cin >> value[i - 1];

    }
    cout << "反序输出：" << endl;
    for (int i = 9; i >= 0; i--)
    {
        cout << value[i] << ' ';
    }
    // PrintArr(p, 10);
    return 0;
}



void PrintArr(int* p, int num)
{
    for (int i = 0; i < num; i++)
    {
        cout << *p << ' ';
        p--;

    }

}