#include <iostream>
#include <cmath>
using namespace std;
#include<iostream>
#include<vector>
using namespace std;


struct stu
{
    int m_num;
    double m_score;
};


int main()
{
    int n, k;

    cin >> n >> k;
    stu std[n];
    for (int j = 0; j < n; j++) {
        cin >> std[j].m_num;
        cin >> std[j].m_score;
    }
    // 排序法1
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i; j++) {
            stu temp;
            if (std[i].m_score < std[i + j].m_score) {
                temp = std[i];
                std[i] = std[j + i];
                std[j + i] = temp;
            }
        }
    }
    //排序法2

    cout << std[k - 1].m_num << ' ' << std[k - 1].m_score;
    return 0;
}