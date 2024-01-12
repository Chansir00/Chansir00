#include <iostream>
#include <vector>
#include <algorithm>
#include<ctime>
using namespace std;


int main()
{
    srand(0);
    vector<int> point = {};
    int sum = 0;
    for (int i = 1;i <= 10;i++)
    {
        int a;
        // cout << "请输入第" << i << "个评分";
        // cin >> a;
        a = rand() % 11;
        point.push_back(a);
    }
    sort(point.begin(), point.end());
    cout << "最终评分：";
    for (int i = 1; i <= 8; i++)
    {
        cout << point[i] << ' ';
        sum += point[i];
    }
    cout << "平均分:" << sum / 8.0;

    return 0;
}
