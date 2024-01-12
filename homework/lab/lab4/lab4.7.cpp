#include <iostream>
#include <string>
#include <vector>

using namespace std;
void check(vector <int> num);
int main()
{
    string ean;
    vector <int> num = {};
    cout << "请输入条形码：" << endl;
    cin >> ean;
    for (auto i : ean)
        num.push_back(static_cast<int>(i) - 48);
    if (ean.substr(0, 3) == "690" || ean.substr(0, 3) == "692" || ean.substr(0, 3) == "691")
        check(num);
    else
        cout << "不是中国条形码" << endl;
    return 0;

}

void check(vector <int> num)
{
    int code_odd = num[0] + num[2] + num[4] + num[6] + num[8] + num[10];
    int code_even = (num[1] + num[3] + num[5] + num[7] + num[9] + num[11]) * 3;
    int code_check_1 = (code_odd + code_even) % 10;
    int code_check_2 = (10 - code_check_1) % 10;

    for (int i = 2;i < num.size();i++)
    {
        if (num[2] == 2)
        {
            if (i >= 3 && i <= 7)
            {
                if (i == 3)
                    cout << "厂商代码：";
                cout << num[i];
            }
            else if (i >= 8 && i <= 11)
            {
                if (i == 8)
                    cout << "\n商品项目代码：";
                cout << num[i];
            }
            else if (i == 12)
            {
                cout << "\n检验码：";
                cout << num[i] << endl;
            }
        }
        else
        {
            if (i >= 3 && i <= 6)
            {
                if (i == 3)
                    cout << "厂商代码：";
                cout << num[i];
            }
            else if (i >= 7 && i <= 11)
            {
                if (i == 8)
                    cout << "\n商品项目代码：";
                cout << num[i];
            }
            else if (i == 12)
                cout << "\n检验码：" << num[i] << endl;;
        }
    }
    if (code_check_2 == num[12])
        cout << "条形码正确";
    else
        cout << "条形码错误";
}