#include <iostream>
#include <ctime>
using namespace std;


class ShellSort {
public:

    void shellInsertSort(int* arr, int len, int dk) {
        // 一层for 
        for (int i = dk; i < len; ++i) { // i=dk，其实是以dk为增量的子序列的第2个元素，与基本插入排序一样从第2个元素开始

            if (arr[i] < arr[i - dk]) {
                int x = arr[i]; // 哨兵
                int j = i - dk;

                while (x < arr[j] && j >= 0) { // 一定要判断j>0，因为while循环体中j会<0
                    arr[j + dk] = arr[j];
                    j -= dk;
                }
                // 跳出时，x >= arr[j]
                arr[j + dk] = x;
            }
        }
    }

    void shellSort(int* arr, int len) {
        int dk = len / 2;
        while (dk >= 1) {
            shellInsertSort(arr, len, dk);
            dk /= 2;
        }
    }


    void Shellsort2(int* arr, int len) {
        int h = 1;
        int t = lenth / 3;
        while (h < t)
        {
            h = h * 3 - 1;
        }
        while (h > 1)
        {
            for (int i = h;i < lenth;i++)
            {
                for (int j = i; >= h && arr[j] < ar[j - h];j -= h)
                {
                    swap(arr[j], arr[j - h]);
                }
            }
        }
        h /= 3;

    }

    void PrintArr(int* arr, int len)
    {
        for (int i = 0;i < len;i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

void Creat_Arr(int* arr)
// dk是shell排序的增量
{
    for (int i = 0;i < 10;i++)
    {
        arr[i] = rand() % 100;
    }
}

int main()
{
    srand(time(nullptr));
    int arr[10] = {};
    int* p = arr;
    Creat_Arr(p);
    ShellSort s;
    s.shellSort(p, 10);
    s.PrintArr(p, 10);
    // shellSort(p, 10);
    // PrintArr(p, 10);
    return 0;

}

