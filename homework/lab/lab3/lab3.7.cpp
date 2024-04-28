#include<iostream>
using namespace std;

int main()
{
    int n;
    while (1)
    {
        cout << "PLease give n:";
        cin >> n;
        if (n == 0)
        {
            break;
        }
        int k = n - 1;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < 2 * k + 1; j++)
            {
                if (j >= k - i && j <= k + i)
                {
                    cout << '*';
                }
                else
                {
                    cout << ' ';
                }

            }
            cout << endl;
        }
    }
    return 0;

}