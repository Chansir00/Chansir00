#include <ctime>
#include<iostream>
using namespace std;

double delta(int N)
{
    double del = 0;
    clock_t start = clock();
    for (int i = 0; i < N; i++)
    {
        for (int j = 0;j < 10000;j++);
        {
            for (int k = 0;k < 10000;k++);
            {
                ;
            }
        }
    }
    clock_t end = clock();
    del = (double)(end - start) / CLOCKS_PER_SEC;
    return del;
}


double distance(double del)
{
    double d = del * 340 / 2;
    return d;
}

int main()
{
    int N = 100000; //假定的循环次数
    double del = delta(N);
    double d = distance(del);
    cout << "距离为：" << d << "米";
    return 0;
}