#include <iostream>

using namespace std;

int max_value(int array[][4], int n)     //const int array[][4] 声明的数组是一个常量数组，意味着数组中的元素值不能被修改，可以防止误操作。
{
    int i, j, max = array[0][0], c, h;
    for (i = 0;i < n;i++)
    {
        for (j = 0;j < 4;j++)
        {
            if (max < array[i][j])
            {
                max = array[i][j];
                c = i + 1;
                h = j + 1;
            }

        }
    }
    cout << "最大值" << max << "第" << c << "行" << "第" << h << "列" << endl;
    return 0;
}

int main()
{
    int a[3][4] = { {1,3,6,7} ,{2,4,6,8,} ,{15,17,34,12} };
    max_value(a, 3);
    return 0;
}