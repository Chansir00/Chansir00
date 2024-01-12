#include <iostream>
#include <vector>

using namespace std;
void vec(int n, int m);

int main()
{
    cout << "请输入n(人数),m(报数):" << endl;
    int n, m, sec = 0;
    cin >> n >> m;
    for (int i = 2;i <= n;i++)
        sec = (sec + m) % i;
    cout << "最后的人是" << sec + 1 << endl;

    // vec(n, m);//法二
}


void vec(int n, int m)   //法二
{
    vector<bool> v(n, 1);
    int k = 0, h = n;
    while (h != 1)
    {
        for (int i = 0; i != n; i++)
        {
            if (v[i] == 1)
            {
                k++;
            }
            if (k == m)
            {
                h--;
                v[i] = 0;
                k = 0;
            }
            if (i == n)
                i = 0;
        }
    }
    for (int i = 0; i != n; i++)
    {
        if (v[i] == 1)
        {
            cout << "最后的人是 " << i + 1 << endl;
        }
    }
}
